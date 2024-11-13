using UnityEngine;

namespace ET.Client
{
    [EntitySystemOf(typeof(GameTankComponent))]
    [FriendOf(typeof(GameTankComponent))]
    public static partial class GameTankSystem
    {
        [EntitySystem]
        private static void Awake(this GameTankComponent self)
        {
            self.TankPlayer1 = GameObject.Find("tank_player");
            self.MoveSpeed = 20;
        }

        [EntitySystem]
        private static void Update(this GameTankComponent self)
        {

        }

        private static void UpdateInput(this GameTankComponent self)
        {
            var movement = new Vector3 (0, 0, 0);
            if (Input.GetKey(KeyCode.UpArrow))
            {
                movement.y = self.MoveSpeed;
            }
            else if (Input.GetKey(KeyCode.DownArrow))
            {
                movement.y = -self.MoveSpeed;
            }
            if (Input.GetKey(KeyCode.LeftArrow))
            {
                movement.x = -self.MoveSpeed;
            }
            if (Input.GetKey(KeyCode.RightArrow))
            {
                movement.x = self.MoveSpeed;
            }

            self.TankPlayer1.GetComponent<Transform>().position += movement;
        }
    }
}