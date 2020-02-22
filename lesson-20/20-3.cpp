#include <stdio.h>

class Value{
private:
    int mi;
public:
    Value(int val)
    {
        printf("Value(int val), val = %d\n", val);
        mi = val;
    }
};

class Test{
private:
    Value v1;
    Value v2;
    Value v3;
public:
    Test() : v1(10), v2(20), v3(30)
    {
        printf("Test()\n");
    }

};

int main()
{
    Test t;  // 先调用参数列表，再执行构造函数函数体
    /*
        Value(int val), val = 10
        Value(int val), val = 20
        Value(int val), val = 30
        Test()
    */

    return 0;
}