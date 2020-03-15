#include <iostream>
#include <string>

using namespace std;

class Parent
{
public:
    int mi;
    
    void add(int v)  // 被隐藏了
    {
        mi += v;
    }
    void add(int a, int b)
    {
        mi += (a + b);
    }
};

class Child : public Parent
{
public:
    int mi;
    
    void add(int v)  // 当子类中定义add函数，父类中的add函数就被隐藏了，必须要使用作用域分辨符::调用
    {
        mi += v;
    }
    void add(int a, int b)
    {
        mi += (a + b);
    }
    void add(int x, int y, int z)
    {
        mi += (x + y + z);
    }
};

int main()
{
    Child c;
    
    c.mi = 100;    
    c.Parent::mi = 1000;
    
    cout << "c.mi = " << c.mi << endl;  // 100
    cout << "c.Parent::mi = " << c.Parent::mi << endl;  // 1000
    
    // 父类和子类中都定义了add函数，父类的add函数被隐藏，使用c.add()调用的是子类中的add函数
    c.add(1);  // compile error
    c.add(2, 3);  // compile error
    c.add(4, 5, 6);

    // 调用子类中的add函数
    c.Parent::add(1);
    c.Parent::add(2, 3);
    
    cout << "c.mi = " << c.mi << endl;  // 121  ==>  100 + 1 + (2+3) + (4+5+6)
    cout << "c.Parent::mi = " << c.Parent::mi << endl;  // 1006 ==> 1000 + 1 + (2+3)
    
    return 0;
}