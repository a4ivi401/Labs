using System;

namespace VectorLibrary
{
    public class Vector2D
    {
        private double _x;
        private double _y;

        // Конструктор за замовчуванням
        public Vector2D()
        {
            _x = 0.0;
            _y = 0.0;
        }

        // Конструктор з параметрами
        public Vector2D(double x, double y)
        {
            _x = x;
            _y = y;
        }

        // Конструктор копіювання
        public Vector2D(Vector2D other)
        {
            _x = other._x;
            _y = other._y;
        }

        // Деструктор
        ~Vector2D()
        {
        }

        public double X { get { return _x; } }
        public double Y { get { return _y; } }

        public double GetLength()
        {
            return Math.Sqrt(_x * _x + _y * _y);
        }

        public double GetAngle()
        {
            return Math.Atan2(_y, _x);
        }
    }
}