using UnityEngine.EventSystems;
using UnityEngine;
using System;

public class HoldButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerExitHandler
{
    public Action onPress;
    public Action onRelease;

    public void OnPointerDown(PointerEventData eventData)
    {
        onPress?.Invoke();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        onRelease?.Invoke();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        onRelease?.Invoke();
    }
}