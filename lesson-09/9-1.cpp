#include <stdio.h>

void func(int &a)
{
    a = 1000;
}

int main()
{
    int a = 0;

    printf("a = %d\n", a);

    // int &b = a;
    // func(b);

    func(a);
    printf("a = %d\n", a);

    return 0;
}