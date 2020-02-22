#include <stdio.h>

class Test{
private:
    const int ci;
    int mi;
public:
    int getCI()
    {
        return ci;
    }

    int getI()
    {
        return mi;
    }

    Test(int value) : ci(value)
    {
        mi = 100;
    }

};

int main()
{
    Test t(1000);

    printf("%d\n", t.getCI());
    printf("%d\n", t.getI());

    const int i;

    return 0;
}