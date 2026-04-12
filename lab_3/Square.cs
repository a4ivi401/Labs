namespace OopLab1_3;

public class Square
{
        private double x, y;
        private double side;
        
        public Square(double x = 0.0, double y = 0.0, double side = 1.0)
        {
            this.x = x;
            this.y = y;
            this.side = side;
        }
        
        public Square(Square other)
        {
            this.x = other.x;
            this.y = other.y;
            this.side = other.side;
            Console.WriteLine("[Викликано конструктор копіювання]");
        }

        public double GetArea() => side * side;
        public double GetPerimeter() => 4 * side;


        public void PrintData()
        {
            Console.WriteLine($"Квадрат [Вершини: ({x}, {y}), ({x}, {y + side}), ({x + side}, {y + side}), ({x + side}, {y}); Сторона: {side:F2}]");
        }
        
        public static Square operator +(Square a, Square b)
        {
            return new Square(a.x, a.y, a.side + b.side);
        }
        
        public static Square operator +(Square a, double value)
        {
            return new Square(a.x, a.y, a.side + value);
        }
        
        public static Square operator /(Square a, Square b)
        {
            if (b.side == 0) throw new DivideByZeroException("Ділення на нуль!");
            return new Square(a.x, a.y, a.side / b.side);
        }
}