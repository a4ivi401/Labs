namespace lab4_lib;

public class StringClasses
{
    public class BaseString
    {
        public string Text { get; protected set; }
        
        public BaseString()
        {
            Text = "";
        }
        
        public BaseString(string text)
        {
            Text = text;
        }
        
        public BaseString(BaseString other)
        {
            Text = other.Text;
        }
        
        public int GetLength()
        {
            return Text?.Length ?? 0;
        }
    }
    public class DigitalString : BaseString
    {
        // Явний виклик базового конструктора за допомогою : base()
        public DigitalString() : base() { }
        public DigitalString(string text) : base(text) { }
        public DigitalString(DigitalString other) : base(other) { }

        // Метод обернення цифрового рядка
        public void ReverseString()
        {
            if (string.IsNullOrEmpty(Text)) return;
            
            char[] charArray = Text.ToCharArray();
            Array.Reverse(charArray);
            Text = new string(charArray);
        }
    }
}