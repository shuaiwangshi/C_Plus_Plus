#include <stdio.h>

void func(int &a)
{
    a = 1000;
    printf("%s, &a = %p\n", __func__, &a);

}

int main()
{
    int a = 1;

    printf("%s, &a = %p\n", __func__, &a);

    func(a);

    printf("a = %d\n", a);

    return 0;
}