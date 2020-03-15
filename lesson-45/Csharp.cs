class Obj
{
    protected string mName;
    protected string mInfo;
    
    public Obj()
    {
        mName = "Object";
        mInfo = "";
    }
    
    public string name()
    {
        return mName;
    }
    
    public string info()
    {
        return mInfo;
    }
}

class Point : Obj
{

    private int mX;
    private int mY;

    public Point(int x, int y)
    { 
        mX = x;
        mY = y;
        mName = "Point";
        mInfo = "P(" + mX + ", " + mY + ")";
    }
    
    public int x()
    {
        return mX;
    }
    
    public int y()
    {
        return mY;
    }
}

class Program
{
    public static void Main(string[] args)
    {
        System.Console.WriteLine("C# Demo");    // C# Demo
        
        Point p = new Point(1, 2);
        
        System.Console.WriteLine(p.name());     // Point
        System.Console.WriteLine(p.info());     // P(1, 2)
        
    }
}

