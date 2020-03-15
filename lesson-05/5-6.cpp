#include <stdio.h>

struct TRef
{
    char* before;  // 8字节
    char& ref;     // 8字节，本质是常量指针，相当于char* const ref;
    char* after;   // 8字节
    
};

int main()
{
    char a = 'a';
    char& b = a;
    char c ='c';

    TRef r = {&a, b, &c};

    printf("sizeof(r) = %zu\n", sizeof(r));               // 24
    printf("sizeof(r.before) = %zu\n", sizeof(r.before)); // 8
    printf("sizeof(r.after)  = %zu\n", sizeof(r.after));  // 8
    printf("&r.before = %p\n", &r.before);
    printf("&r.after  = %p\n", &r.after); //after 和 before相差16个字节，中间隔了个b引用所占用的空间

    return 0;     
}