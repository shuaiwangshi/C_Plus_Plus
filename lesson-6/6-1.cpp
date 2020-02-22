#include <stdio.h>

__attribute__((always_inline)) 
inline int func(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    func(1, 2);


    return 0;
}