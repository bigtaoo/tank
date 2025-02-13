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
                }
            }

            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            playerComponent.HealthPoint = initiaConfig.PlayerHP;
        }
    }
}