#include <stdio.h>

int main()
{
    const int c = 100;

    int *p = (int *)&c;

    *p = 1;

    printf("c = %d\n", c);
    
    printf("*p = %d\n", *p);

    return 0;
}