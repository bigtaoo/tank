using ET.Client;
using System;

namespace ET
{
    public static class TankMovementHelper
    {
        public static (TankPosition, int) Move(TankPosition currentPosition, TankDirection direction, float distance)
        {
            var rotation = 0;
            switch (direction)
            {
                case TankDirection.Left:
                    {
                        currentPosition.X -= distance;
                        rotation = 90;
                        break;
                    }
                case TankDirection.Right:
                    {
                        currentPosition.X += distance;
                        rotation = 270;
                        break;
                    }
                case TankDirection.Up:
                    {
                        currentPosition.Y += distance;
                        rotation = 0;
                        break;
                    }
                case TankDirection.Down:
                    {
                        currentPosition.Y -= distance;
                        rotation = 180;
                        break;
                    }
                case TankDirection.None:
                default:
                    {
                        break;
                    }
            }
            return (currentPosition, rotation);
        }

        public static bool CanTankMoveToPosition(Scene root, TankPosition targetPosition, TankDirection direction)
        {
            var mapTilesComponent = root.GetComponent<TankMapTilesComponent>();
            if (!mapTilesComponent.IsInMap(targetPosition, 1.0f))
            {
                return false;
            }
            targetPosition.X = PositionToTile(direction, targetPosition.X);
            targetPosition.Y = PositionToTile(direction, targetPosition.Y);

            switch (direction)
            {
                case TankDirection.Left:
                    //Log.Warning($"Move left: x {position.X} y:{position.Y} up {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y })}," +
                    //    $"down {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y - 1 })}");
                    return mapTilesComponent.GetTile(new TankPosition { X = targetPosition.X - 1, Y = targetPosition.Y }) == null &&
                        mapTilesComponent.GetTile(new TankPosition { X = targetPosition.X - 1, Y = targetPosition.Y - 1 }) == null;
                case TankDirection.Right:
                    //Log.Warning($"Move Right: x {position.X} y:{position.Y} up {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y })}," +
                    //    $"down {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y - 1 })}");
                    return mapTilesComponent.GetTile(new TankPosition { X = targetPosition.X, Y = targetPosition.Y }) == null &&
                    mapTilesComponent.GetTile(new TankPosition { X = targetPosition.X, Y = targetPosition.Y - 1 }) == null;
                case TankDirection.Up:
                    //Log.Warning($"Move Up: x {position.X} y:{position.Y} right {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y })}," +
                    //    $"left {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y })}");
                    return mapTilesComponent.GetTile(new TankPosition { X = targetPosition.X, Y = targetPosition.Y }) == null &&
                        mapTilesComponent.GetTile(new TankPosition { X = targetPosition.X - 1, Y = targetPosition.Y }) == null;
                case TankDirection.Down:
                    //Log.Warning($"Move Down: x {position.X} y:{position.Y} right {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y - 1 })}," +
                    //    $"left {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y - 1 })}");
                    return mapTilesComponent.GetTile(new TankPosition { X = targetPosition.X, Y = targetPosition.Y - 1 }) == null &&
                        mapTilesComponent.GetTile(new TankPosition { X = targetPosition.X - 1, Y = targetPosition.Y - 1 }) == null;
                case TankDirection.None:
                default:
                    return false;
            }
        }

        public static float PositionToTile(TankDirection direction, float v)
        {
            return (direction == TankDirection.Up || direction == TankDirection.Right) ? (float)Math.Ceiling(v) : (float)Math.Floor(v);
        }

        public static bool PositionHasTank(Scene root, TankPosition position, TankDirection direction, int tankId)
        {
            var X = PositionToTile(direction, position.X);
            var Y = PositionToTile(direction, position.Y);

            var robotComponent = root.GetComponent<TankRobotComponent>();
            foreach (var robot in robotComponent.Robots.Values)
            {
                if (robot.RobotId == tankId)
                {
                    continue;
                }
                var robotX = PositionToTile(robot.Direction, robot.Position.X);
                var robotY = PositionToTile(robot.Direction, robot.Position.Y);

                if (AreRectanglesIntersecting(X, Y, robotX, robotY))
                {
                    return true;
                }
            }

            if (tankId != TankConsts.PlayerIndex)
            {
                var playerComponent = root.GetComponent<TankPlayerComponent>();
                var playerX = PositionToTile(playerComponent.MoveDirection, playerComponent.Position.X);
                var playerY = PositionToTile(playerComponent.MoveDirection, playerComponent.Position.Y);
                if (AreRectanglesIntersecting(X, Y, playerX, playerY))
                {
                    return true;
                }
            }

            return false;
        }

        private static bool AreRectanglesIntersecting(float x1, float y1, float x2, float y2)
        {
            if (x1 < x2 - 1 || x2 < x1 - 1) return false;
            if (y1 < y2 - 1 || y2 < y1 - 1) return false;
            return true;
        }
    }
}