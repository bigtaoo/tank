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
    }
}