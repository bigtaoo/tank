using UnityEngine;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankClientPlayerTankComponent))]
    [FriendOf(typeof(TankClientPlayerTankComponent))]
    public static partial class TankClientPlayerTankSystem
    {
        [EntitySystem]
        private static void Awake(this TankClientPlayerTankComponent self)
        {
            self.TankPlayer1 = GameObject.Find("tank_player");
            self.MoveSpeed = 0.1f;
            //Log.Warning($"Tank player is null: {self.TankPlayer1 == null}");
        }

        [EntitySystem]
        private static void Update(this TankClientPlayerTankComponent self)
        {
            self.UpdateInput();
        }

        private static void UpdateInput(this TankClientPlayerTankComponent self)
        {
            var movement = new Vector3 (0, 0, 0);
            var targetRotation = new Vector3(0, 0, 0);
            bool moved = false;
            if (Input.GetKey(KeyCode.UpArrow))
            {
                movement.y = self.MoveSpeed;
                targetRotation.z = 270;
                moved = true;
            }
            else if (Input.GetKey(KeyCode.DownArrow))
            {
                movement.y = -self.MoveSpeed;
                targetRotation.z = 90;
                moved = true;
            }
            else if (Input.GetKey(KeyCode.LeftArrow))
            {
                movement.x = -self.MoveSpeed;
                targetRotation.z = 0;
                moved = true;
            }
            else if (Input.GetKey(KeyCode.RightArrow))
            {
                movement.x = self.MoveSpeed;
                targetRotation.z = 180;
                moved = true;
            }

            if (moved)
            {
                if (self.TankPlayer1 == null)
                {
                    self.TankPlayer1 = GameObject.Find("tank_player");
                    //Log.Warning($"Tank player is null: {self.TankPlayer1 == null}");
                }
                var trasform = self.TankPlayer1.GetComponent<Transform>();
                trasform.position += movement;
                var currentRotation = trasform.rotation.eulerAngles;               
                if (currentRotation != targetRotation)
                {
                    //Log.Warning($"target rotation: {targetRotation.ToString()}, current rotation: {currentRotation.ToString()}");
                    trasform.rotation = Quaternion.Euler(targetRotation);
                }
            }
        }
    }
}