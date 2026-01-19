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
                    self.RobotGameObject = spawnPoint;
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
            foreach (var robot in robotComponent.Robots.Values)
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

                self.UpdateRobotSprite(robot);
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
                    GameObject.Instantiate(self.RobotGameObject);
                robotGameObject.SetActive(true);
                self.Robots[robot.RobotId] = robotGameObject;

                // Log.Warning($"Add robot {robot.RobotId}, x: {robot.Position.X}, y: {robot.Position.X}, point:{robot.SpawnPointId}");
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
            foreach (var c in robotComponent.InitialRemainingRobotsCount)
            {
                remainingRobot += c;
            }
            if (remainingRobot == 0)
            {
                var gameResultComponent = self.Root().GetComponent<TankGameResultComponent>();
                gameResultComponent.IsWin = true;
                gameResultComponent.IsGameEnd = true;
                UIHelper.Create(self.Root(), UIType.TankUIGameResult, UILayer.High).Coroutine();
            }
        }

        private static void UpdateRobotSprite(this TankClientRobotComponent self, TankRobot robot)
        {
            // Log.Warning("Start robot sprite update.");
            if (!robot.UpdateSprite)
            {
                return;
            }
            robot.UpdateSprite = false;
            Sprite sprite = null;
            var scale = new Vector3(1, 1, 1);
            if (robot.Level == 2)
            {
                if (self.SpriteLevel2 == null)
                {
                    self.SpriteLevel2 = AtlasManager.Instance.GetSprite("tank-level-2");
                }
                sprite = self.SpriteLevel2;
                scale = new Vector3(1.1f, 1.1f, 1.0f);
            }
            else if (robot.Level == 3)
            {
                if (self.SpriteLevel3 == null)
                {
                    self.SpriteLevel3 = AtlasManager.Instance.GetSprite("tank-level-3");
                }
                sprite = self.SpriteLevel3;
                scale = new Vector3(1.2f, 1.2f, 1.0f);
            }
            else
            {
                if (self.SpriteLevel1 == null)
                {
                    self.SpriteLevel1 = AtlasManager.Instance.GetSprite("tank");
                }
                sprite = self.SpriteLevel1;
            }
            if (sprite == null)
            {
                Log.Error("Update tank sprite failed!");
                return;
            }

            var robotObject = self.Robots[robot.RobotId];
            var renderer = robotObject.GetComponent<SpriteRenderer>();
            renderer.sprite = sprite;
            var transform = robotObject.GetComponent<Transform>();
            transform.localScale = scale;

            // Log.Warning("Update tank sprite.");
        }
    }
}