#include <iostream>

using namespace std;

class Test
{
    int mValue;
public:
    Test(int v)
    {
        mValue = v;
    }
    int getMV()
    {
        return mValue;
    }
};

Test func(Test t)
{
    cout << "Test func(Test t), t = " << t.getMV() << endl;
    return t;
}

bool operator&&(const Test& l, const Test& r)
{
    return true;
}

bool operator||(const Test& l, const Test& r)
{
    return true;
}

// 观察程序的打印结果，发现重载逻辑运算符得到的结果和我们预期的不同
int main()
{
    Test t1(0);
    Test t2(1);

    if (func(t1) && func(t2))  // 等价于 operator && (func(t1), func(t2))
    {
        cout << "Result is true!" << endl;
    }
    else
    {
        cout << "Result is false!" << endl;
    }

    if (func(t1) || func(t2))  // 等价于 operator || (func(t1), func(t2))
    {
        cout << "Result is true!" << endl;
    }
    else
    {
        cout << "Result is false!" << endl;
    }
    
    return 0;
}