using System;
using System.Runtime.InteropServices;
using lab4_lib;

namespace lab4;

class Program
{
    static void Main(string[] args)
    {
        StringClasses.DigitalString myStr = new StringClasses.DigitalString("987654321");
        
        Console.WriteLine($"Початковий цифровий рядок: {myStr.Text}");
        Console.WriteLine($"Довжина рядка: {myStr.GetLength()} символів");
        
        //reverse
        myStr.ReverseString();
        Console.WriteLine($"Обернений рядок: {myStr.Text}");
        
        StringClasses.DigitalString copiedStr = new StringClasses.DigitalString(myStr);
        Console.WriteLine($"Скопійований рядок: {copiedStr.Text}");
        
        Console.ReadLine();
        
    }
}