#include <stdio.h>

extern "C"
{
#include "add.h"  // int add(int, int);
}

int main()
{
    printf("%d\n", add(1, 2));

    return 0;
}