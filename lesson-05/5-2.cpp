#include <stdio.h>

int main()
{
    int a = 100;  //  a的属性不变

    const int& b = a;  // b是a的别名，并且在a的基础上增加了const属性

    a = 999;  // 通过a访问变量，属性还是之前的

    // b = 10;  // error，只读

    int *p = (int *)&b;
    *p = 1000;

    printf("a = %d\n", a);

    return 0;
}