#include <stdio.h>

class Test {
    int mi;
public:
    void func() {
        printf("func()\n");
    }
    static void sfunc()
    // void sfunc()
    {
        printf("static sfunc()\n");
        func();
    }
};

int main()
{
    Test t;

    t.sfunc();

    return 0;
}