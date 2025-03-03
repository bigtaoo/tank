using ET.Client;
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
            for (int i = 0; i < TankInitialConfig.RobotTypies; i++)
            {
                var spawnPoint = GameObject.Find($"robot-{i + 1}");
                if (spawnPoint != null)
                {
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
                //Log.Warning($"recycled robots: {self.RecycledRobots.Count}");
                var robotGameObject = self.RecycledRobots.Count > 0 ?
                    self.RecycledRobots.Pop() :
                    GameObject.Instantiate(self.robotGameObject);
                robotGameObject.SetActive(true);
                self.Robots[robot.RobotId] = robotGameObject;

                //Log.Warning($"Add robot {robot.RobotId}, x: {robot.Position.X}, y: {robot.Position.X}, point:{robot.SpawnPointId}");
            }
            robotComponent.RobotsToAdd.Clear();
        }

        private static void RemoveRobot(this TankClientRobotComponent self)
        {
            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            if (robotComponent.RobotsToRemove.Count == 0)
            {
                return;
            }

            foreach (var robot in robotComponent.RobotsToRemove)
            {
                var robotGameObject = self.Robots[robot.RobotId];
                self.RecycledRobots.Push(robotGameObject);
                robotGameObject.SetActive(false);
                self.Robots.Remove(robot.RobotId);
            }
            robotComponent.RobotsToRemove.Clear();

            var remainingRobot = 0;
            foreach (var c in robotComponent.RemainingRobotsCount)
            {
                remainingRobot += c;
            }
            if (remainingRobot == 0)
            {
                var gameResultComponent = self.Root().GetComponent<TankGameResultComponent>();
                gameResultComponent.IsWin = true;
                UIHelper.Create(self.Root(), UIType.TankUIGameResult, UILayer.High).Coroutine();
            }
        }
    }
}