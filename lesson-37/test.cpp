#include <iostream>
#include <string>

using namespace std;

class Test
{
    int mi;
public:
    Test(int i = 0)
    {
        cout << "Test(int i = 0)" << endl;
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


int main()
{
    for (int i=0; i<10; i++)
    {
        Test* p = new Test(i);    // 这个堆空间无法自己释放，需要借助第三方
        cout << p->getMI() << endl;
        delete p;   // 只有delete才能调用堆对象的析构函数  程序运行结束并不会调用堆对象的析构函数
    }


    return 0;
}
