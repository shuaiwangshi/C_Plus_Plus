#include <stdio.h>

int main()
{
    const int& a = 100;

    int *p = (int *)&a;
    *p = 0;

    printf("a = %d\n", a);


    const int &b = 1;

    return 0;
}