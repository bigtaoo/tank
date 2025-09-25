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

    [SerializeField]
    private int robotMoveSpeed;
    public int RobotMoveSpeed => robotMoveSpeed;

    [SerializeField]
    private int robotBulletMoveSpeed;
    public int RobotBulletMoveSpeed => robotBulletMoveSpeed;

    [SerializeField]
    private int robotSpawnInterval;
    public int RobotSpawnInterval => robotSpawnInterval;

    [SerializeField]
    private int robotShootInterval;
    public int RobotShootInterval => robotShootInterval;
}