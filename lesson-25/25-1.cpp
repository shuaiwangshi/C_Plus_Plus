#include <stdio.h>

class Test {
private:
    static int si;
public:
    int mi;

};

int Test::si = 10;

int main()
{
    Test t;

    // printf("t.si = %d\n", t.si);

    // printf("sizeof(Test) = %zu\n", sizeof(Test));

    printf("Test::si = %d\n", Test::si);

    return 0;
}