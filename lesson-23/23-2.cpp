#include <stdio.h>

class Test {
private:
    int mi;
    void init(int i) {  // 初始化函数
        mi = i;
    }
public:
    Test(int i) {
        init(i);
    }
    Test() {
        init(0);
    }
    ~Test() {

    }

    void getMI() {
        printf("mi = %d\n", mi);;
    }
};

int main()
{
    Test t;
    
    t.getMI();  // mi = 0

    return 0;
}