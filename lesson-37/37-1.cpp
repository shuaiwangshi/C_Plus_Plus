#include <iostream>

using namespace std;

class Test
{
private:
    int i;
public:
    Test(int i) {
        this->i = i;
    }
    int Value()
    {
        return i;
    }
    ~Test();

};

int main()
{
    for (int i=0; i<5; i++)
    {
        Test *p = new Test(i);  // 堆空间使用结束后，后面没有释放
        cout << p->Value() << endl;
    }

    return 0;
}