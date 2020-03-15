#include <stdio.h>

// 指针版本
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// 引用版本
void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 10;
    int b = 20;

    swap(&a, &b);
    // swap(a, b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}