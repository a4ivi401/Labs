using System.Numerics;
using System.Globalization;

namespace lab_1;

class Program
{
    static void Main(string[] args)
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.InputEncoding = System.Text.Encoding.UTF8;
        try
        {
            Console.Write("Введіть координату Х: ");
            double inputX = Convert.ToDouble(Console.ReadLine());

            Console.Write("Введіть координату Y: ");
            double inputY = Convert.ToDouble(Console.ReadLine());

            Vector vec = new Vector(inputX, inputY);

            Console.WriteLine("---Дані обʼєкта---");
            Console.WriteLine($"Вектор: ({vec.X}, {vec.Y})");

            double radius = vec.CalculateRadius();
            double angleRad = vec.CalculateAngle();

            double angleDeg = angleRad * (180.0 / Math.PI);

            Console.WriteLine("---Полярні координати---");
            Console.WriteLine($"Радіус (r): {radius:F3}");
            Console.WriteLine($"Кут (радіани): {angleRad:F3}");
            Console.WriteLine($"Кут (градуси): {angleDeg:F3}");
        }
        catch (Exception ex)
        {
            Console.WriteLine(ex.Message);
        }
    }
}