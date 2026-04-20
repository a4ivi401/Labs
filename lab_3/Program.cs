using System;

namespace OopLab1_3
{
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