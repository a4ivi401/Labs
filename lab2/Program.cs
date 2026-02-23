using System;
using VectorLibrary;
using System.Globalization;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = System.Text.Encoding.UTF8;
            Console.InputEncoding = System.Text.Encoding.UTF8;

            Console.WriteLine("--- Тестування класу Vector2D (C#) ---");

            // 1. Виклик конструктора за замовчуванням
            Vector2D v1 = new Vector2D();
            Console.WriteLine($"v1 (За замовчуванням): X={v1.X}, Y={v1.Y}");

            // 2. Виклик конструктора з параметрами
            Vector2D v2 = new Vector2D(5.0, 12.0);
            Console.WriteLine($"\nv2 (З параметрами): X={v2.X}, Y={v2.Y}");
            Console.WriteLine("v2 Полярні координати:");
            Console.WriteLine($" - Довжина (r): {v2.GetLength()}");
            Console.WriteLine($" - Кут (rad): {v2.GetAngle()}");

            // 3. Виклик конструктора копіювання
            Vector2D v3 = new Vector2D(v2);
            Console.WriteLine($"\nv3 (Копія v2): X={v3.X}, Y={v3.Y}");

            Console.ReadLine();
        }
    }
}