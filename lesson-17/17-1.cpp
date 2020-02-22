#include <stdio.h>

class Test
{
private:
    int mi;
    int mj;
public:
    int getI() {return mi;}
    int getJ() {return mj;}
    // Test()
    // {
    //     printf("Constructor...\n");
    //     mi = 1;
    //     mj = 2;
    // }
    void initialize() {mi = 0; mj = 0;}
};

Test gt;

int main()
{

    // printf("This is test!\n");

    gt.initialize();

    printf("gt.mi = %d\n", gt.getI());
    printf("gt.mj = %d\n", gt.getJ());

    Test t;
    t.initialize();

    printf("t.mi = %d\n", t.getI());
    printf("t.mj = %d\n", t.getJ());

    Test *pt = new Test;
    pt->initialize();
    printf("pt->mi = %d\n", pt->getI());
    printf("pt->mj = %d\n", pt->getJ());

    return 0;
}