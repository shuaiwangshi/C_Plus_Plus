#include <stdio.h>

class Test
{
private:
    int m_value;
public:
    Test()
    {
        printf("Test()\n");
        m_value = 0;
    }
    Test(int v)
    {
        printf("Test(int v), v = %d\n", v);
        m_value = v;
    }

    int getValue()
    {
        return m_value;
    }
};

int main()
{
    // Test ta[3] = {1, 2, 3};

    // for (int i=0; i<3; i++) {
    //     printf("ta[%d].getValue() = %d\n", i, ta[i].getValue());
    // }

    Test t1(1);
    Test t2 = 2;
    Test t = Test(3);

    return 0;
}