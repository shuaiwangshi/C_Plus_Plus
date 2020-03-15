#include <iostream>

using namespace std;

// 同名覆盖本质和下面相同，同名变量处于不同的作用域中
namespace A {
    int g_i = 0;
}
namespace B {
    int g_i = 1;
}

class Parent
{
public:
    int mi;
    Parent()
    {
        cout << "Parent() : " << "&mi = " << &mi << endl;
    }
};

class Child : public Parent
{
public:
    int mi;
    Child()
    {
        cout << "Child() : " << "&mi = " << &mi << endl;
    }
};

int main()
{
    Child c;

    c.mi = 100;
    c.Parent::mi = 1000;

    cout << "c.mi = " << c.mi << endl;
    cout << "&c.mi = " << &c.mi << endl;
    
    cout << "c.Parent::mi = " << c.Parent::mi << endl;
    cout << "&c.Parent::mi = " << &c.Parent::mi << endl;

    return 0;
}