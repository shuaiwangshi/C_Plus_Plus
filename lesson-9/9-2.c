#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#include "add.h"  // int add(int, int);

#ifdef __cplusplus
}
#endif  

int main()
{
    printf("%d\n", add(1, 2));

    return 0;
}
