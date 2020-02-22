#include <stdio.h>


class Test
{
public:
    Test() {printf("Test()\n");}
    Test(int v) {printf("Test(int v), v = %d\n", v);}

};

int main()
{
    Test t1;

    Test t2(1);

    Test t3 = 2;

    return 0;
}