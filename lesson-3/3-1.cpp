#include <stdio.h>

int main()
{
    const int c = 100;

    int *p = (int *)&c;  // 对c取地 ==> 为c分配4字节的空间

    *p = 1;  // 修改前面分配的空间中的值

    printf("c = %d\n", c);  // 经过符号表的替换 ==> printf("c = %d\n", 100);

    printf("*p = %d\n", *p);  // 1

    return 0;
}