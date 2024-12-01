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
            playerComponent.InilializePlayer(new TankPosition { X = position.x, Y = position.y });
        }

        [EntitySystem]
        private static void Update(this TankClientPlayerTankComponent self)
        {
            self.UpdateInput();

            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            var transform = self.TankPlayer1.GetComponent<Transform>();
            var currentPosition = transform.position;
            var targetPosition = new Vector3(playerComponent.Position.X, playerComponent.Position.Y, currentPosition.z);
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
                var bulletComponent = self.Root().GetComponent<TankBulletComponent>();
                bulletComponent.CreateBullet(new TankBullet
                {
                    Camp = TankCamp.Player,
                    MoveDirection = playerComponent.CurrentDirection,
                    Position = playerComponent.Position,
                    Speed = playerComponent.MoveSpeed * 3,
                });
            }


            //var movement = new Vector3 (0, 0, 0);
            //var targetRotation = new Vector3(0, 0, 0);
            //bool moved = false;
            //if (Input.GetKey(KeyCode.UpArrow))
            //{
            //    movement.y = self.MoveSpeed;
            //    targetRotation.z = 270;
            //    moved = true;
            //}
            //else if (Input.GetKey(KeyCode.DownArrow))
            //{
            //    movement.y = -self.MoveSpeed;
            //    targetRotation.z = 90;
            //    moved = true;
            //}
            //else if (Input.GetKey(KeyCode.LeftArrow))
            //{
            //    movement.x = -self.MoveSpeed;
            //    targetRotation.z = 0;
            //    moved = true;
            //}
            //else if (Input.GetKey(KeyCode.RightArrow))
            //{
            //    movement.x = self.MoveSpeed;
            //    targetRotation.z = 180;
            //    moved = true;
            //}

            //if (moved)
            //{
            //    if (self.TankPlayer1 == null)
            //    {
            //        self.TankPlayer1 = GameObject.Find("tank_player");
            //        //Log.Warning($"Tank player is null: {self.TankPlayer1 == null}");
            //    }
            //    var trasform = self.TankPlayer1.GetComponent<Transform>();
            //    trasform.position += movement;
            //    var currentRotation = trasform.rotation.eulerAngles;               
            //    if (currentRotation != targetRotation)
            //    {
            //        //Log.Warning($"target rotation: {targetRotation.ToString()}, current rotation: {currentRotation.ToString()}");
            //        trasform.rotation = Quaternion.Euler(targetRotation);
            //    }
            //}
        }
    }
}