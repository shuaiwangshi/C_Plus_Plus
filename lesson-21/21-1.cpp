#include <stdio.h>

class Test {
private:
    int mii;
    int mj;
public:
    Test() : mii(0xfeff), mj(0xdd)
    {
        printf("Test()\n");
    }
    int getMI()
    {
        return mii;
    }
};


Test g_t1;
Test g_t2;


int main()
{
    // Test t1(1);
    // Test t2(2);

    // Test *p = new Test(100);

    // printf("sizeof(Test) = %zu\n", sizeof(Test));

    printf("%d\n", g_t1.getMI());

    return 0;
}
