using System;

namespace OopLab1_3
{
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

    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("=== Дослідження C# ===\n");
            
            Square K1 = new Square(); 
            Square K2 = new Square(side: 10.0, y: 3.0, x: 2.0); // Порядок не важливий завдяки іменам!
            Square K3 = new Square(K2); 

            Console.WriteLine("Початкові об'єкти:");
            Console.Write("K1: "); K1.PrintData();
            Console.Write("K2: "); K2.PrintData();
            Console.Write("K3: "); K3.PrintData();
            
            K3 = K3 + 5.0;
            Console.WriteLine("\nK3 після збільшення на 5 одиниць:");
            K3.PrintData();
            
            K1 = K2 / K3;
            Console.WriteLine("\nK1 після K1 = K2 / K3:");
            K1.PrintData();
            
            Square K_sum = K1 + K2 + K3;
            Console.WriteLine("\nРезультат ланцюжкового додавання (K1 + K2 + K3):");
            K_sum.PrintData();
        }
    }
}