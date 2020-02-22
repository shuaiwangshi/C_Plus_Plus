#include <stdio.h>

// 类的声明
class Test
{
private:
    const int ci;  // 这里是只读变量，不是const常量
    // const int ci = 1;  // 这里是类的声明，不能在其中初始化成员变量
public:
    Test() : ci(100)  // 每个构造函数都要有初始化列表，因此你也不知道后面定义对象时会调用哪个构造函数
    {

    }
    Test(int value) : ci(10)  // 每个构造函数都要有初始化列表，因此你也不知道后面定义对象时会调用哪个构造函数
    {
        int *p = (int *)&ci;  // 可以通过指针对ci进行修改
        *p = 10000000;
    }

    int getCI()
    {
        return ci;
    }

};

int main()
{
    class Test t(1);
    printf("%d\n", t.getCI());

    const int ci(0);  // const int ci = 0;
    // const int &p = ci;
    // p = 1;

    return 0;
}