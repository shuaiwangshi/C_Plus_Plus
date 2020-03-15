#include <iostream>

using namespace std;

class Parent {
public:
    int mi;
};

class Child : private Parent
{
public:
    int method()
    {
        return mi;
    }
};

int main()
{
    Child c;

    cout << c.method() << endl; 

    return 0;
}