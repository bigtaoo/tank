using UnityEngine;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankGameComponent))]
    [FriendOf(typeof(TankGameComponent))]
    public static partial class GameTankSystem
    {
        [EntitySystem]
        private static void Awake(this TankGameComponent self)
        {
            self.TankPlayer1 = GameObject.Find("tank_player");
            self.MoveSpeed = 20;
            Log.Warning($"Tank player is null: {self.TankPlayer1 == null}");
        }

        [EntitySystem]
        private static void Update(this TankGameComponent self)
        {
            self.UpdateInput();
        }

        private static void UpdateInput(this TankGameComponent self)
        {
            var movement = new Vector3 (0, 0, 0);
            bool moved = false;
            if (Input.GetKey(KeyCode.UpArrow))
            {
                movement.y = self.MoveSpeed;
                moved = true;
            }
            else if (Input.GetKey(KeyCode.DownArrow))
            {
                movement.y = -self.MoveSpeed;
                moved = true;
            }
            else if (Input.GetKey(KeyCode.LeftArrow))
            {
                movement.x = -self.MoveSpeed;
                moved = true;
            }
            else if (Input.GetKey(KeyCode.RightArrow))
            {
                movement.x = self.MoveSpeed; 
                moved = true;
            }

            if (moved)
            {
                self.TankPlayer1.GetComponent<Transform>().position += movement;
            }
        }
    }
}