class Obj
{
    protected String mName;
    protected String mInfo;
    
    public Obj()
    {
        mName = "Object";
        mInfo = "";
    }
    
    public String name()
    {
        return mName;
    }
    
    public String info()
    {
        return mInfo;
    }
}

class Point extends Obj
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

class Program {
    public static void main(String[] args){
        System.out.println("Java Demo");    // Java Demo
        
        Point p = new Point(1, 2);
        
        System.out.println(p.name());       // Point
        System.out.println(p.info());       // P(1, 2)
    }
}