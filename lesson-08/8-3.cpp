#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

int main()
{
    // printf("%p\n", (int (*)(int, int))add);

    // printf("%p\n", (int (*)(int, int, int))add);

    add(1, 2);
    add(1, 2, 3);
    
    return  0;
}