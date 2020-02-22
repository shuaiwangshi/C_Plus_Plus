#include <iostream>

using namespace std;

class Test {
private:
    int mi;
public:
    Test(int val)
    {
        mi = val;
    }
    int getMI()
    {
        return mi;
    }
};

int func(const Test &t)
{
    return t.getMI();
    // return 0;
}


int main()
{
    // Test t(100);

    cout << func(100) << endl;

    return 0;
}