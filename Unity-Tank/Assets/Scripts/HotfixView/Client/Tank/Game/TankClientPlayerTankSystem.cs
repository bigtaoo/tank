using DG.Tweening;
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
            var gameResultComponent = self.Root().GetComponent<TankGameResultComponent>();
            if (gameResultComponent.IsGameEnd)
            {
                return;
            }

            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            if (playerComponent.GetPlayerLifes() <= 0)
            {
                gameResultComponent.IsGameEnd = true;
                gameResultComponent.IsWin = false;
                UIHelper.Create(self.Root(), UIType.TankUIGameResult, UILayer.High).Coroutine();
                return;
            }

            var transform = self.TankPlayer1.GetComponent<Transform>();
            var currentPosition = transform.position;
            var playerPosition = playerComponent.GetPlayerPosition();
            var targetPosition = new Vector3(playerPosition.X - TankConsts.TileOffset, playerPosition.Y - TankConsts.TileOffset, currentPosition.z);

            var buffComponent = self.Root().GetComponent<TankBuffComponent>();
            var addTweenBuff = buffComponent.GetBuff(TankConsts.PlayerIndex, TankBuffType.AddTween);
            if (addTweenBuff != null)
            {
                var time = addTweenBuff.RemoveTime - TimeInfo.Instance.ClientFrameTime();
                buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.TweenDisplay, time);
                //Log.Warning($"Add tween display time {time}");
                buffComponent.RemoveBuff(TankConsts.PlayerIndex, TankBuffType.AddTween);

                transform.DOMove(targetPosition, time / 1000.0f);
            }

            if (buffComponent.GetBuff(TankConsts.PlayerIndex, TankBuffType.TweenDisplay) != null)
            {
                return;
            }

            self.UpdateInput();
                  
            if (targetPosition != currentPosition)
            {
                //Log.Warning($"Update position: oldX: {currentPosition.x}, oldY:{currentPosition.y}, oldz:{currentPosition.z}, x:{targetPosition.x}, y:{targetPosition.y}");
                transform.position = targetPosition;
            }

            var rotation = Quaternion.Euler(new Vector3(0, 0, playerComponent.GetPlayerRotation()));
            if (transform.rotation != rotation)
            {
                transform.rotation = rotation;
            }
        }

        private static void UpdateInput(this TankClientPlayerTankComponent self)
        {
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            var gameInfoComponent = self.Root().GetComponent<TankClientGameInfoComponent>();
            if (!gameInfoComponent.InputMutex)
            {
                if (Input.GetKey(KeyCode.UpArrow))
                {
                    playerComponent.SetMoveDirection(TankDirection.Up);
                }
                else if (Input.GetKey(KeyCode.DownArrow))
                {
                    playerComponent.SetMoveDirection(TankDirection.Down);
                }
                else if (Input.GetKey(KeyCode.LeftArrow))
                {
                    playerComponent.SetMoveDirection(TankDirection.Left);
                }
                else if (Input.GetKey(KeyCode.RightArrow))
                {
                    playerComponent.SetMoveDirection(TankDirection.Right);
                }
                else
                {
                    playerComponent.SetMoveDirection(TankDirection.None);
                }
            }

            if (Input.GetKeyUp(KeyCode.Space))
            {
                playerComponent.Shoot();
            }
        }
    }
}