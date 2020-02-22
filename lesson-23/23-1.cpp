#include <stdio.h>

class Test {
private:
    int mi;
public:
    Test(int i) {
        printf("Test(int i)\n");
        mi = i;
    }
    Test() {
        printf("Test()\n");
        Test(1000);  // 为了函数复用，在Test()这个构造函数中又调用了Test(int i)这个构造函数，想要将mi的初始值设置为0
    }
    ~Test() {
        printf("~Test()\n");
    }

    void getMI() {
        printf("mi = %d\n", mi);;
    }
};

int main()
{
    Test t;

    t.getMI();

    return 0;
}