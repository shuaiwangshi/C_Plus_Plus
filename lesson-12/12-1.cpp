#include <stdio.h>

int g_i = 100;

void func();

int main()
{
    func();

    const int ci = g_i;  // 使用全局变量初始化也不行！  全局变量不是在编译期就能确定吗？
    // const int ci = 100;

    // int *p = (int *)&ci;
    // printf("*p = %d\n", *p);
    // *p = 1;
    // printf("*p = %d\n", *p);




    printf("ci = %d\n", ci);


    return 0;
}