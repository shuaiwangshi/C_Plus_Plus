#include <stdio.h>

class Test{
private:
public:
    Test() {};
    ~Test() {
        printf("~Test()\n");
    };
};

int main()
{
    Test t;

    printf("End...\n");

    return 0;
}