using UnityEngine;

public class TankInitialConfig : MonoBehaviour
{
    [SerializeField]
    private int playerHP;
    public int PlayerHP => playerHP;

    public const int RobotTypies = 10;
    [SerializeField]
    private int[] robotCount = new int[RobotTypies];
    public int RobotCount(int index) => index < 0 || index >= RobotTypies ? 0 : robotCount[index];

    [SerializeField]
    private int[] robotLevel = new int[RobotTypies];
    public int RobotLevel(int index) => index < 0 || index >= RobotTypies ? 0 : robotLevel[index];
}