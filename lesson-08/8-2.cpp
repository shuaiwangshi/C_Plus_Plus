#include <stdio.h>

int func(int x)
{
    printf("1\n");
    return x;
}

int func(char x)
{
    printf("2\n");
    return x;
}

int main()
{
    func(1);

    return 0;
}