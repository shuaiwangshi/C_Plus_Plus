#include <stdio.h>

class Test {
private:
    int mi;
public:
    Test(int i) {
        mi = i;
    }
    Test() {
        mi = 0;
    }
    ~Test() {
    }

    void getMI() {
        printf("mi = %d\n", mi);;
    }
};

int main()
{
    // 使用构造函数生成的对象调用成员函数
    Test().getMI();  // 0
    Test(100).getMI();  // 100

    return 0;
}