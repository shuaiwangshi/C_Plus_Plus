#include <stdio.h>

int& func(int& a)
{
    return a;
}

int main()
{
    int a = 100;

    printf("%d\n", func(a));

    return 0;
}