#include <stdio.h>

class Test
{
private:
    static int cCount;
    int mi;
public:
    Test()
    {
        cCount++;
    }
    ~Test()
    {
        --cCount;
    }
    // static int getCount()
    // {
    //     return cCount;
    // }
    static int getCount();  // 声明
    static int func()
    {
        return mi;
    }
};

int Test::cCount = 0;

int Test::getCount()  // 定义
{
    return cCount;
}

int main()
{
    Test t1;

    Test *p = new Test;

    printf("count = %d\n", Test::getCount());

    return 0;
}
