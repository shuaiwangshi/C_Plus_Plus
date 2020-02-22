#include <stdio.h>

// void static_cast_demo()
// {
//     int i = 0x12345;
//     char c = 'c';
//     int* pi = &i;
//     char* pc = &c;
    
//     c = static_cast<char>(i);
//     pc = static_cast<char*>(pi);  // 不能用于基本类型指针之间的转换
//                                   // error: invalid static_cast from type ‘int*’ to type ‘char*’
// }

void const_cast_demo()
{
    const int& j = 1;
    int& k = const_cast<int&>(j);
    
    const int x = 2;
    int& y = const_cast<int&>(x);
    
    // int z = const_cast<int>(x);
    
    k = 5;
    printf("k = %d\n", k);  // 5
    printf("j = %d\n", j);  // 5
    
    y = 8;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("&x = %p\n", &x);
    printf("&y = %p\n", &y);
}

void reinterpret_cast_demo()
{
    int i = 0;
    char c = 'c';
    int* pi = &i;
    char* pc = &c;
    
    pc = reinterpret_cast<char*>(pi);
    pi = reinterpret_cast<int*>(pc);
    pi = reinterpret_cast<int*>(i);
    // c = reinterpret_cast<char>(i);   // 不能用于基本类型之间的转换
}

void dynamic_cast_demo()
{
    int i = 0;
    int* pi = &i;
    // char* pc = dynamic_cast<char*>(pi); // 类指针之间，且需要虚函数的支持
}

int main()
{
    const_cast_demo();

    return 0;
}