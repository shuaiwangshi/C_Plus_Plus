#include <stdio.h>

class Test{
private:
    int mi;
    static int si;
public:
    int getMI()
    {
        return mi;
    }
    Test() : mi(100)
    {

    }

    friend int func(Test &p);  // 使用friend表明这个 func 函数成为Test类的朋友
    // friend int test(Test &p);
};

int Test::si = 0;

// 外部的函数
int func(Test &p)
{
    return p.mi;
}

int test(Test &p)
{
    Test::si = 100;
    // return p.mi;
    return 0;
}

int main()
{
    Test t;

    printf("%d\n", func(t));

    return 0;
}