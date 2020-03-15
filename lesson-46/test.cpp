#include <iostream>

using namespace std;

class Value
{
public:
    Value()
    {
        cout << "Value()" << endl;
    }

    Value(int v)
    {
        cout << "Value(int v)" << endl;
    }
};

class Test
{
    Value v1;
    Value v2;
public:
    // Test() : v1(100), v2(200)
    Test()
    {
        cout << "Test()" << endl;
    }
};

int main()
{
    Test t;


    return 0;
}