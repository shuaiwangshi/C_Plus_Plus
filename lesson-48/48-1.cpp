#include <iostream>
#include <string>

using namespace std;

class Parent
{
public:
    int mi;

    void add(int i)
    {
        mi += i;
    }
    void add(int a, int b)
    {
        mi += (a + b);
    }
};

class Child : public Parent
{
public:
    int mv;

    void add(int x, int y, int z)
    {
        mv += (x + y + z);
    }
};

int main()
{
    Parent p;
    Child c;
    
    // cout << "p.mi = " << p.mi << endl;
    // cout << "c.Parent::mi = " << c.Parent::mi << endl;

    p = c;  // 子类赋值给父类

    // cout << "p.mi = " << p.mi << endl;
    // cout << "c.Parent::mi = " << c.Parent::mi << endl;

    Parent p1(c);  // 子类初始化父类 ==> 会调用拷贝构造函数
    // cout << "p1.mi = " << p1.mi << endl;

    Parent& rp = c; // 父类引用直接引用子类对象
    Parent *pp = &c; // 父类指针指向子类对象

    rp.add(1);     // 没有发生同名覆盖
    rp.add(1, 2);  // 没有发生同名覆盖

    // 为什么编译不过？
    // pp->mv = 100;
    // pp->add(1, 2, 3)

    return 0;
}