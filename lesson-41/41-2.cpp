#include <iostream>

using namespace std;

class Test
{
    int mValue;
public:
    Test()
    {

    }
    // 当使用explicit修饰转换构造函数时，编译器就不能隐式调用了
    // 必须通过强制类型转换显式的调用转换构造函数
    explicit Test(int val)  
    {
        cout << "........" << endl;
        mValue = val;
    }

    Test operator + (const Test& t)
    {
        Test ret(mValue + t.mValue);

        return ret;
    }

    int getValue()
    {
        return mValue;
    }
};

int main()
{
    Test t;

    // 下面三种强制类型转换都可以，推荐使用C++中的新型类型转换
    // t = (Test)5;  // 最不推荐使用的
    // t = Test(5);
    t = static_cast<Test>(5);

    Test r;

    // r = t + (Test)10;
    // r = t + Test(10);
    r = t + static_cast<Test>(10);  // 15

    cout << r.getValue() << endl;

    return 0;
}