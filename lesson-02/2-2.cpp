#include <stdio.h>

struct Student
{
    const char* name;
    int age;
};

f(i) // 不允许这种形式
{
    printf("i = %d\n", i);
}

g()  // 不允许这种形式
{
    return 5;
}


int main(int argc, char *argv[])
{
    Student s1 = {"Scott", 26};  // 使用Student直接定义
    Student s2 = {"July", 25};
    
    f(10);  // error
    
    printf("g() = %d\n", g(1,2,3,4,5));  // error
    
    return 0;
}
