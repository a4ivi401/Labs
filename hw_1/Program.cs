namespace hw_1;

class Program
{
    static void Main(string[] args)
    {
        char[] myLetters = {'h', 'e', 'l', 'l', 'l', 'l', 'l', 'l', 'l', 'a' , 'a', 'a'};
        CharContainer container = new CharContainer(myLetters);
        
        Console.WriteLine($"Кількість голосних: {container.VowelsCount}");
    }
}