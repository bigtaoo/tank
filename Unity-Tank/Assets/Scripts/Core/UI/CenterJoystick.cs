using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

[RequireComponent(typeof(RectTransform))]
public class CenterJoystick : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    [Header("Refs (assign in Inspector)")]
    [Tooltip("The circular/base rect. Usually the same object as this component or its child.")]
    [SerializeField] private RectTransform background;

    [Tooltip("The draggable knob/handle rect (child of background).")]
    [SerializeField] private RectTransform handle;

    [Header("Tuning")]
    [Tooltip("Max distance (in pixels) the handle can move from center.")]
    [SerializeField] private float maxRadius = 80f;

    [Tooltip("0..1 fraction of max radius ignored to avoid jitter.")]
    [Range(0f, 1f)]
    [SerializeField] private float deadZone = 0.15f;

    [Tooltip("Spring-back speed (higher = snappier).")]
    [SerializeField] private float returnSpeed = 12f;

    [System.Serializable]
    public class DirectionEvent : UnityEvent<TankDirection> {}

    [Header("Events")]
    public DirectionEvent onDirectionChanged;

    // Output (read-only)
    public Vector2 RawDirection { get; private set; }   // normalized analog (not snapped)
    public float Magnitude01 { get; private set; }      // 0..1 (after clamp)
    public TankDirection CurrentDirection => _currentDirection;

    // internals
    private Canvas _canvas;
    private Camera _uiCam;
    private bool _dragging;
    private TankDirection _currentDirection = TankDirection.Stop;

    private void Reset()
    {
        // Try auto-wire typical child names
        if (!background) background = GetComponent<RectTransform>();
        if (!handle && background && background.childCount > 0)
            handle = background.GetChild(0) as RectTransform;
    }

    private void Awake()
    {
        if (!background) background = GetComponent<RectTransform>();
        _canvas = GetComponentInParent<Canvas>();
        _uiCam = _canvas && _canvas.renderMode != RenderMode.ScreenSpaceOverlay ? _canvas.worldCamera : null;
        CenterHandleImmediate();
        SetDirection(TankDirection.Stop); // fire initial if desired (or comment out)
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        _dragging = true;
        UpdateDrag(eventData);
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (_dragging) UpdateDrag(eventData);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        _dragging = false;
        // Start spring-back
        StopAllCoroutines();
        StartCoroutine(SpringBack());
    }

    private void UpdateDrag(PointerEventData eventData)
    {
        if (!background || !handle) return;

        // Convert screen to local in background space
        Vector2 localPoint;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(background, eventData.position, _uiCam, out localPoint);

        // Offset from background center (assuming pivot 0.5/0.5)
        Vector2 delta = localPoint;

        // Clamp to radius
        float maxR = Mathf.Max(1f, maxRadius);
        if (delta.sqrMagnitude > maxR * maxR)
            delta = delta.normalized * maxR;

        // Move handle
        handle.anchoredPosition = delta;

        // Analog outputs
        float mag = delta.magnitude;
        Magnitude01 = Mathf.Clamp01(mag / maxR);

        if (Magnitude01 < deadZone)
        {
            RawDirection = Vector2.zero;
            SetDirection(TankDirection.Stop);
            return;
        }

        RawDirection = delta.normalized;

        // Snap to 4 directions
        TankDirection snapped = Snap4(RawDirection);
        SetDirection(snapped);
    }

    private System.Collections.IEnumerator SpringBack()
    {
        if (!handle) yield break;

        while (handle.anchoredPosition.sqrMagnitude > 0.1f && !_dragging)
        {
            handle.anchoredPosition = Vector2.Lerp(handle.anchoredPosition, Vector2.zero, Time.unscaledDeltaTime * returnSpeed);
            RawDirection = Vector2.zero;
            Magnitude01 = 0f;
            // Emit Stop only once when state changes; SetDirection handles that.
            SetDirection(TankDirection.Stop);
            yield return null;
        }
        CenterHandleImmediate();
        SetDirection(TankDirection.Stop);
    }

    private void CenterHandleImmediate()
    {
        if (handle) handle.anchoredPosition = Vector2.zero;
        RawDirection = Vector2.zero;
        Magnitude01 = 0f;
    }

    private void SetDirection(TankDirection newDir)
    {
        if (newDir == _currentDirection) return; // emit only on change
        _currentDirection = newDir;
        onDirectionChanged?.Invoke(_currentDirection);
    }

    private static TankDirection Snap4(Vector2 dir)
    {
        if (dir == Vector2.zero) return TankDirection.Stop;
        if (Mathf.Abs(dir.x) > Mathf.Abs(dir.y))
            return dir.x > 0 ? TankDirection.Right : TankDirection.Left;
        else
            return dir.y > 0 ? TankDirection.Up : TankDirection.Down;
    }
}
