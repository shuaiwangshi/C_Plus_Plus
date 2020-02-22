#include <stdio.h>

int main()
{
    int *p = new int;

    *p = 10;
    *p = *p + 5;

    printf("*p = %d\n", *p);
    printf("p = %p\n", p);

    delete p;

    p = new int[10];  // 申请10个int， >=40字节

    for (int i = 0; i < 10; i++) {
        p[i] = i + 1;

        printf("p[%d] = %d\n", i, p[i]);
    }

    delete[] p;

    return 0;
}