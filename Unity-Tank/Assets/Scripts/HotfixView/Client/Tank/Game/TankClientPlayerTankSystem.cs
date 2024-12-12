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
            //Log.Warning($"Tank player is null: {self.TankPlayer1 == null}");

            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            var position = self.TankPlayer1.GetComponent<Transform>().position;
            playerComponent.InilializePlayer(new TankPosition { X = position.x + TankConsts.TileOffset, Y = position.y + TankConsts.TileOffset });
        }

        [EntitySystem]
        private static void Update(this TankClientPlayerTankComponent self)
        {
            self.UpdateInput();

            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            var transform = self.TankPlayer1.GetComponent<Transform>();
            var currentPosition = transform.position;
            var targetPosition = new Vector3(playerComponent.Position.X - TankConsts.TileOffset, playerComponent.Position.Y - TankConsts.TileOffset, currentPosition.z);
            if (targetPosition != currentPosition)
            {
                //Log.Warning($"Update position: oldX: {currentPosition.x}, oldY:{currentPosition.y}, oldz:{currentPosition.z}, x:{targetPosition.x}, y:{targetPosition.y}");
                transform.position = targetPosition;
            }

            var rotation = Quaternion.Euler(new Vector3(0, 0, playerComponent.Rotation));
            if (transform.rotation != rotation)
            {
                transform.rotation = rotation;
            }
        }

        private static void UpdateInput(this TankClientPlayerTankComponent self)
        {
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            if (Input.GetKey(KeyCode.UpArrow))
            {
                playerComponent.SetMoveDirection(TankDirection.Up);
                playerComponent.CurrentDirection = TankDirection.Up;
            }
            else if (Input.GetKey(KeyCode.DownArrow))
            {
                playerComponent.SetMoveDirection(TankDirection.Down);
                playerComponent.CurrentDirection = TankDirection.Down;
            }
            else if (Input.GetKey(KeyCode.LeftArrow))
            {
                playerComponent.SetMoveDirection(TankDirection.Left);
                playerComponent.CurrentDirection= TankDirection.Left;
            }
            else if (Input.GetKey(KeyCode.RightArrow))
            {
                playerComponent.SetMoveDirection(TankDirection.Right);
                playerComponent.CurrentDirection = TankDirection.Right;
            }
            else
            {
                playerComponent.SetMoveDirection(TankDirection.None);
            }

            if (Input.GetKeyUp(KeyCode.Space))
            {
                playerComponent.Shoot();
            }
        }
    }
}