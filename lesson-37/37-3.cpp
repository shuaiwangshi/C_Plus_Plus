#include <iostream>
#include <string>

using namespace std;

class Test
{
    int mi;
public:
    Test(int i = 0)
    {
        cout << "Test()" << endl;
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

class Pointer  // 把Pointer类对象当做指针来使用
{
    Test *mp;
public:
    Pointer(Test *p)
    {
        // cout << "Pointer()" << endl;
        mp = p;
    }
    Pointer(const Pointer& obj)  // 一片堆空间最多只能由一个指针标识
    {
        mp = obj.mp;
        const_cast<Pointer&>(obj).mp = NULL;
    }
    Pointer& operator=(const Pointer& obj)
    {
        if (this != &obj)
        { 
            mp = obj.mp;
            const_cast<Pointer&>(obj).mp = NULL;
        }

        return *this;
    }
    // 对于一个类指针而言，只会有两种操作 -> 和 *
    Test* operator->()
    {
        return mp;
    }
    // 这里返回Test和返回Test&有什么区别？
    Test& operator*()  
    {
        return *mp;
    }
    bool isNull()
    {
        return (NULL == mp);
    }
    ~Pointer()
    {
        // cout << "~Pointer()" << endl;
        delete mp;
    }
};

int main()
{
/*     for (int i=0; i<5; i++)
    {
        // 这个堆空间无法自己释放，需要借助第三方Pointer类
        // 如果这里是new申请的数组怎么办？
        Pointer p = new Test(i);   // 把Pointer类对象当做指针来使用

        // p->getMI()等价于(p.operator->())->getMI()
        cout << p->getMI() << endl;  
    } */

    Pointer p1 = new Test(0);

    cout << p1->getMI() << endl;

    Pointer p2 = p1;

    cout << p1.isNull() << endl;
    cout << p2->getMI() << endl;

    return 0;
}
