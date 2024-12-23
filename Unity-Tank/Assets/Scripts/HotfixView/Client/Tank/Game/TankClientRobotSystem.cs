using UnityEngine;

namespace ET
{
    [EntitySystemOf(typeof(TankClientRobotComponent))]
    [FriendOf(typeof(TankClientRobotComponent))]
    public static partial class TankClientRobotSystem
    {
        [EntitySystem]
        private static void Awake(this TankClientRobotComponent self)
        {
            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            for (int i = 0; i < 1; i++)
            {
                var spawnPoint = GameObject.Find($"robot-{i + 1}");
                if (spawnPoint != null)
                {
                    var spawnInfo = new TankRobotSpawnInfo
                    {
                        SpawnPointId = i,
                        RobotCount = 5,
                        RobotLevel = 1,
                        Rotation = (int)spawnPoint.transform.rotation.eulerAngles.z,
                        SpawnInterval = 50 * 1000,
                        SpawnPosition = new TankPosition
                        {
                            X = spawnPoint.transform.position.x + TankConsts.TileOffset,
                            Y = spawnPoint.transform.position.y + TankConsts.TileOffset,
                        },
                        SpawnTime = 0,
                        ShootInterval = 3 * 1000,
                    };
                    robotComponent.SpawnInfos.Add(spawnInfo);
                    spawnPoint.SetActive(false);
                    self.RecycledRobots.Push(spawnPoint);
                    self.robotGameObject = spawnPoint;
                }
            }
        }

        [EntitySystem]
        private static void Update(this TankClientRobotComponent self)
        {
            self.AddRobot();
            self.RemoveRobot();
            self.UpdataPosition();
        }

        private static void UpdataPosition(this TankClientRobotComponent self)
        {
            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            foreach (var robot in robotComponent.Robots)
            {
                var robotGameObject = self.Robots[robot.RobotId];
                var currentPosition = robotGameObject.transform.position;
                var targetPosition = new Vector3(robot.Position.X - TankConsts.TileOffset, robot.Position.Y - TankConsts.TileOffset, currentPosition.z);
                if (targetPosition != currentPosition)
                {
                    //Log.Warning($"Update position: oldX: {currentPosition.x}, oldY:{currentPosition.y}, oldz:{currentPosition.z}, x:{targetPosition.x}, y:{targetPosition.y}");
                    robotGameObject.transform.position = targetPosition;
                }

                var rotation = Quaternion.Euler(new Vector3(0, 0, robot.Rotation));
                if (robotGameObject.transform.rotation != rotation)
                {
                    robotGameObject.transform.rotation = rotation;
                }
            }
        }

        private static void AddRobot(this TankClientRobotComponent self)
        {
            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            foreach (var robot in robotComponent.RobotsToAdd)
            {
                Log.Warning($"recycled robots: {self.RecycledRobots.Count}");
                var robotGameObject = self.RecycledRobots.Count > 0 ?
                    self.RecycledRobots.Pop() :
                    GameObject.Instantiate(self.robotGameObject);
                robotGameObject.SetActive(true);
                self.Robots[robot.RobotId] = robotGameObject;

                Log.Warning($"Add robot {robot.RobotId}, x: {robot.Position.X}, y: {robot.Position.X}, point:{robot.SpawnPointId}");
            }
            robotComponent.RobotsToAdd.Clear();
        }

        private static void RemoveRobot(this TankClientRobotComponent self)
        {
            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            foreach (var robot in robotComponent.RobotsToRemove)
            {
                var robotGameObject = self.Robots[robot.RobotId];
                self.RecycledRobots.Push(robotGameObject);
                robotGameObject.SetActive(false);
                self.Robots.Remove(robot.RobotId);
            }
        }
    }
}