using System;
using ET.Client;
using UnityEngine;

namespace ET
{
    [EntitySystemOf(typeof(TankInitializeConfigComponent))]
    [FriendOf(typeof(TankInitializeConfigComponent))]
    public static partial class TankInitializeConfigSystem
    {
        [EntitySystem]
        private static void Awake(this TankInitializeConfigComponent self)
        {
            var configObject = GameObject.Find("config");
            if (configObject == null)
            {
                Log.Error("Can not find config object");
                return;
            }

            var initiaConfig = configObject.GetComponent<TankInitialConfig>();
            if (initiaConfig == null)
            {
                Log.Error("Can not find initiaConfig component");
                return;
            }

            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            for (int i = 0; i < TankInitialConfig.RobotTypies; i++)
            {
                var spawnPoint = GameObject.Find($"robot-{i + 1}");
                if (spawnPoint != null)
                {
                    var spawnInfo = new TankRobotSpawnInfo
                    {
                        SpawnPointId = i,
                        RobotCount = initiaConfig.RobotCount(i),
                        RobotLevel = initiaConfig.RobotLevel(i),
                        Rotation = (int)spawnPoint.transform.rotation.eulerAngles.z,
                        SpawnInterval = initiaConfig.RobotSpawnInterval,
                        SpawnPosition = new TankPosition
                        {
                            X = spawnPoint.transform.position.x + TankConsts.TileOffset,
                            Y = spawnPoint.transform.position.y + TankConsts.TileOffset,
                        },
                        SpawnTime = 0,
                        ShootInterval = initiaConfig.RobotShootInterval,
                        MoveSpeed = initiaConfig.RobotMoveSpeed,
                        BulletMoveSpeed = initiaConfig.RobotBulletMoveSpeed,
                    };
                    spawnInfo.ShootInterval = Math.Clamp(spawnInfo.ShootInterval, 0, 3000);
                    spawnInfo.SpawnInterval = Math.Clamp(spawnInfo.SpawnInterval,10 * 1000, 50 * 1000);
                    spawnInfo.MoveSpeed = Math.Clamp(spawnInfo.MoveSpeed, 1000, 3000);
                    spawnInfo.BulletMoveSpeed = Math.Clamp(spawnInfo.BulletMoveSpeed, 5 * 1000, 15 * 1000);
                    spawnInfo.RobotCount = Math.Clamp(spawnInfo.RobotCount, 3, 30);
                    spawnInfo.RobotLevel = Math.Clamp(spawnInfo.RobotLevel, 1, 3);
                    
                    robotComponent.SpawnInfos.Add(spawnInfo);
                    spawnPoint.SetActive(false);
                    robotComponent.InitialRemainingRobotsCount[initiaConfig.RobotLevel(i) - 1] += initiaConfig.RobotCount(i);
                    robotComponent.RemainingSpawnRobots[initiaConfig.RobotLevel(i) - 1] += initiaConfig.RobotCount(i);
                }
            }

            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            playerComponent.UpdatePlayerLifes(initiaConfig.PlayerHP);
        }
    }
}