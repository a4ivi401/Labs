namespace hw_1;

public class CharContainer
{
    private char[] _array;
    private int _vowelsCount;
    public CharContainer(char[] inputCharacters)
    {
        _array = inputCharacters;
        _vowelsCount = 0;
        
        string vowels = "aeiouyAEIOUY";

        for (int i = 0; i < _array.Length; i++)
        {
            if (vowels.Contains(_array[i].ToString()))
            {
                _vowelsCount++;
            }
        }
    }
    public char this[int index]
    {
        get
        {
            if (index >= 0 && index < _array.Length)
            {
                return char.ToUpper(_array[index]);
            }
            else
            {
                return '\0';
            }
        }
    }
    public int VowelsCount => _vowelsCount;
}