#include <stdio.h>

void func(int *p)
{
    *p = 1;
}

int main()
{
    const volatile int ci = 100;
    // const int ci = 100;

    func((int *)&ci);

    // int *p = (int *)&ci;

    // *p = 1;

    printf("ci = %d\n", ci);


    return 0;
}