#include <stdio.h>

int g_v;    // C不会报错；C++会报错
// int g_v;

int main()
{
    printf("Begin...\n");
    
    int c = 0;  // C需要在作用域开始的地方定义局部变量
                // 实际测试，gcc在使用前定义即可；bcc32和VS需要在作用域开始的地方

    // 使用gcc编译会报如下错误
    // error: ‘for’ loop initial declarations are only allowed in C99 mode
    // note: use option -std=c99 or -std=gnu99 to compile your code
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            c += i * j;
        }
    }

    printf("c = %d\n", c);  // c = 36

    register int a;  // C中不允许对寄存器变量取地址；C++可以，register形同虚设
    printf("&a = %p\n", &a);
    
    printf("End...\n");

    return 0;
}