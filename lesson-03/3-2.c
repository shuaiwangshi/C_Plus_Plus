#include <stdio.h>

void f();

const int c = 100;

int main()
{

    printf("%s: c = %d\n", __func__, c);

    f();

    return 0;
}