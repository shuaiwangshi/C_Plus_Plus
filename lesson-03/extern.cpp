// 这个文件编译直接报错

#include <stdio.h>

extern const int c;

void f()
{
    printf("c = %d\n", c);
}

