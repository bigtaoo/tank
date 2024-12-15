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
            for (int i = 0; i < 10; i++)
            {
                var spawnPoint = GameObject.Find($"robot-{i + 1}");
                if (spawnPoint != null)
                {
                    var spawnInfo = new TankRobotSpawnInfo
                    {
                        SpawnPointId = i,
                        RobotCount = 5,
                        RobotLevel = 1,
                        Rotation = (int)spawnPoint.transform.rotation.z,
                        SpawnInterval = 5000,
                        SpawnPosition = new TankPosition
                        {
                            X = spawnPoint.transform.position.x,
                            Y = spawnPoint.transform.position.y,
                        },
                        SpawnTime = 0,
                    };
                    robotComponent.SpawnInfos.Add(spawnInfo);

                    spawnPoint.SetActive(false);
                    self.RecycledRobots.Push(spawnPoint);
                }
            }
        }

        [EntitySystem]
        private static void Update(this TankClientRobotComponent self)
        {

        }
    }
}