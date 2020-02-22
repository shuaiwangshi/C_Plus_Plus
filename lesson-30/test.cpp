#include <stdio.h>

class Test {
    int mi;
public:
    Test(int a = 0)
    {
        mi = a;
    }
    int getValue(Test &t)
    {
        return t.mi;
    }

};

int main()
{
    Test t(111);
    Test t1(100);

    printf("%d\n", t1.getValue(t));

    return 0;
}