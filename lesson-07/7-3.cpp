#include <stdio.h>

int func(int x, int = 1);

int main()
{
    func(1, 2);

    return 0;
}

int func(int x, int)
{
    return x;
}