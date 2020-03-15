module D_Demo;

import std.stdio;
import std.string;

class Obj
{
protected:
    string mName;
    string mInfo;
public:
    this()
    {
        mName = "Object";
        mInfo = "";
    }
    string name()
    {
        return mName;
    }
    string info()
    {
        return mInfo;
    }
}

class Point : Obj
{
private:
    int mX;
    int mY;
public:
    this(int x, int y)
    {
        mX = x;
        mY = y;
        mName = "Point";
        mInfo = format("P(%d, %d)", mX, mY);
    }
    int x()
    {
        return mX;
    }
    int y()
    {
        return mY;
    }
}

void main(string[] args)
{
    writefln("D Demo");           // D Demo
    
    Point p = new Point(1, 2);
    
    writefln(p.name());           // Point
    writefln(p.info());           // P(1, 2)
}
