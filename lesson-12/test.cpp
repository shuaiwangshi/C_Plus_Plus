#include <stdio.h>

int main()
{
    const int x = 1;  // 真正的常量，放在符号表中；但编译器仍然会为x分配空间，当取址&/引用时，会使用这个内存空间
    const int& rx = x;  // rx为只读变量，对应的内存为编译器为x分配的4字节内存空间

    int& nrx = const_cast<int&>(rx);

    nrx = 100;

    printf("x = %d\n", x);  // 1
    printf("rx = %d\n", rx);  // 100
    printf("nrx = %d\n", nrx);  // 100

    printf("&x = %p\n", &x);      // 0x7ffefa110a6c
    printf("&rx = %p\n", &rx);    // 0x7ffefa110a6c
    printf("&nrx = %p\n", &nrx);  // 0x7ffefa110a6c

    volatile const int y = 2;
    
    int *p = const_cast<int*>(&y);
    *p = 10;

    printf("y = %d\n", y);
    printf("p = %p\n", p);
    printf("&y = %p\n", &y);

    const int z = y;  // z是只读变量，因为y的值无法在编译期确定，只能在运行期确定

    p = const_cast<int*>(&z);
    *p = 66;

    printf("z = %d\n", z);


    char c = 'c';
    char& rc = c;
    const int& trc = c;  // const引用的类型为int   初始化变量的类型为char
                         // 两者类型不同，会生成一个新的只读变量

    rc = 'a';

    printf("sizeof(trc) = %zu\n", sizeof(trc));  // 4 为trc这个int类型分配了4字节

    printf("c = %c\n", c);  // a
    printf("rc = %c\n", rc);  // a
    printf("trc = %c\n", trc);  // c
    printf("&c = %p\n", &c);      // 0x7ffe26c9f3f7
    printf("&trc = %p\n", &trc);  // 0x7ffe26c9f404
 
    return 0;
}