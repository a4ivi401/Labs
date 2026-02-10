namespace lab_1;

public class Vector
{
    private double x;
    private double y;

    public Vector(double xCoord, double yCoord)
    {
        x = xCoord;
        y = yCoord;
    }

    public double X
    {
        get { return x; }
    }

    public double Y
    {
        get { return y; }
    }

    public double CalculateRadius()
    {
        return Math.Sqrt(x * x + y * y);
    }

    public double CalculateAngle()
    {
        return Math.Atan2(y, x);
    }
}