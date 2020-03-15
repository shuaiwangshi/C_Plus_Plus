#include <stdio.h>

struct TRef{
    char& c;
};

int main()
{
    char c = 'c';
    char& rc = c;
    TRef ref = {c};

    printf("sizeof(char&) = %zu\n", sizeof(char&));  // 1
    printf("sizeof(rc) = %zu\n", sizeof(rc));        // 1
    printf("sizeof(ref) = %zu\n", sizeof(ref));      // 8
    printf("sizeof(TRef) = %zu\n", sizeof(TRef));    // 8
    printf("sizeof(ref.c) = %zu\n", sizeof(ref.c));  // 1

    return 0;
}