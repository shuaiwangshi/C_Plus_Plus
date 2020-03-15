#include <stdio.h>

int main()
{
    bool b = false;
    int a = b;
    
    printf("sizeof(b) = %zu\n", sizeof(b));	// 1
    printf("b = %d, a = %d\n", b, a);		// 0 0
    
    b = 3;
    a = b;
    printf("b = %d, a = %d\n", b, a);	// 1 1
    
    b = -5;
    a = b;
    printf("b = %d, a = %d\n", b, a);	// 1 1
    
    a = 10;
    b = a;
    printf("a = %d, b = %d\n", a, b);	// 10 1
    
    a = 0;
    b = a;
    printf("a = %d, b = %d\n", a, b);	// 0 0
    
    return 0;
}
