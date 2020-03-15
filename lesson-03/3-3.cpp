#include <stdio.h>

void f()
{
    #define a 3	 // 宏，文件作用域
    const int b = 4;  // const有作用域的概念，只在函数f内部有效，函数g不能使用
}

void g()
{
    printf("a = %d\n", a);  // 宏，文件作用域
    // printf("b = %d\n", b);  // 这里会发生错误
}

int main()
{
    const int A = 1;
    const int B = 2;
    int array[A + B] = {0};  // C语言 ==> A+B的值只能在运行时确定，编译会报错
							 // C++ ==> 可以从符号表中取得A+B的值为3，正常编译
    
    for(int i = 0; i < (A + B); i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
    
    f();
    g();
    
    return 0;
}
