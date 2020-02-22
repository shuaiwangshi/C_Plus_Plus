#include <stdio.h>

extern const int c;

void f()
{
    printf("%s: c = %d\n", __func__, c);
}

