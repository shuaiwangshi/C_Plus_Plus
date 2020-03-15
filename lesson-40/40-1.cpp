#include <iostream>

using namespace std;

class Test
{
    int mValue;
public:
    Test(int i = 0)
    {
        mValue = i;
    }
    int getValue()
    {
        return mValue;
    }

    // 这里重载前置++符合其原声语义，先自增，再返回本身
    Test& operator ++ ()  
    {
        cout << "Test& operator ++ ()" << endl;

        ++mValue;  // 自增

        return *this;
    }

    // 这里重载后置++符合其原声语义，先返回本身，再自增
    Test operator ++ (int)  // 后置++需要一个占位参数
    {
        cout << "Test& operator ++ (int)" << endl;

        Test ret(mValue);  // 定义ret，存储++之前的值

        mValue++; // 自增

        return ret;
    }
};

int main()
{
    Test t1(0);

    cout << t1.getValue() << endl;   // 0

    Test tt = ++t1;

    cout << t1.getValue() << endl;   // 1
    cout << tt.getValue() << endl;   // 1

    cout << endl;

    Test t2(0);

    cout << t2.getValue() << endl;   // 0
    
    tt = t2++;  // 为什么这里不给占位参数提供实参也能编译通过？
    
    cout << tt.getValue() << endl;   // 0
    cout << t2.getValue() << endl;   // 1

    return 0;
}
