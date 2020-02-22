#include <stdio.h>

struct Student
{
    const char* name;
    int age;
};

f(i)  // C中可以这样，参数和返回值类型默认为int
{
    printf("i = %d\n", i);
}

g()  // C中可以这样，返回值为int类型，可以传递任意多个参数
{
    return 5;
}


int main(int argc, char *argv[])
{
    struct Student s1 = {"Scott", 26};
    struct Student s2 = {"July", 25};
    
    f(10);
    
    printf("g() = %d\n", g(1,2,3,4,5));
    
    return 0;
}
