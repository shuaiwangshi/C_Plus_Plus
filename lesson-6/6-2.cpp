#include <stdio.h>

//__forceinline
//__attribute__((always_inline))
inline 
int add_inline(int n);

int main(int argc, char *argv[])
{
    int r = add_inline(10);

    printf(" r = %d\n", r);

    return 0;
}

inline int add_inline(int n)
{
    int ret = 0;

    for(int i=0; i<n; i++)
    {
        ret += i;
    }

    return ret;
}