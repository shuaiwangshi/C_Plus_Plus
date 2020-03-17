#include <iostream>

using namespace std;

class Test
{
    int mValue;
public:
    Test()
    {

    }
    // 转换构造函数：① 只有一个参数 ② 参数类型为基本类型或其它类类型（即不能是当前类类型）
    Test(int val)  
    {
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

    t = 5;   // 编译器会进行隐式类型转换，调用转换构造函数 ==> t = Test(5);

    Test r;

    r = t + static_cast<Test>(10);  // 编译器会进行隐式类型转换，调用转换构造函数 ==> r = t + Test(10);

    cout << r.getValue() << endl;

    return 0;
}