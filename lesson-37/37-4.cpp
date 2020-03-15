#include <iostream>
#include <string>

using namespace std;

class Test
{
    int mi;
public:
    Test(int i = 0)
    {
        mi = i;
    }
    int getMI()
    {
        return mi;
    }
    ~Test()
    {
        cout << "~Test()" << endl;
    }
};

template < typename T >
class Pointer
{
    T* mp;
public:
    Pointer(T* p)
    {
        mp = p;
    }
    T* operator->()
    {
        return mp;
    }
    T operator*()
    {
        return *mp;
    }
    ~Pointer()
    {
        cout << "~Pointer()" << endl;
        delete mp;
    }
};

int main()
{
    Test *pt = new Test(100);
    Pointer<Test> p1(pt);

    cout << p1->getMI() << endl;
    cout << (*p1).getMI() << endl;   // . 的优先级比 * 的优先级要高

    cout << endl << endl;

    int* pi = new int(10);
    Pointer<int> p2(pi);

    cout << *p2 << endl;

    return 0;
}
