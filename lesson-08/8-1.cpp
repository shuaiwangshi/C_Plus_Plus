#include <stdio.h>
#include <string.h>

int func(int x)
{
    return x;
}

int func(int a, int b)
{
    return a + b;
}

int func(const char* s)
{
    return strlen(s);
}


int main(int argc, char *argv[])
{
    printf("%d\n", func(3));
    printf("%d\n", func(4, 5));
    printf("%d\n", func("D.T.Software"));
    
    return 0;
}

