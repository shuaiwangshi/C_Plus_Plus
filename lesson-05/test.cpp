#include <stdio.h>

int& demo()
{
    int d = 0;

    printf("demo: d = %d\n", d); //输出0

    return d;//返回局部变量的引用，危险
}

int& func()
{
    static int s = 0;
    printf("func: s = %d\n", s);//输出0

    return s; //合法，返回的是静态局部变量（位于全局存储区中）
}


int main()
{
    int& rd = demo();
    int& rs = func();

    printf("\n");
    printf("main: rd = %d\n", rd);  // 垃圾数值
    printf("main: rs = %d\n", rs);  // 0，返回全局存储区中的s

    return 0;     
}