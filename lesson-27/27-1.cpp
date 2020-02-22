#include <stdio.h>

class Test {
    int mi;
    int mj;
    bool mStatus;  // 添加一个标志
public:
    Test(int i, int j) : mStatus(false)
    {
        mi = i;
        return;   // 编译通过，表示构造函数中可以有return语句
                  // 构造函数执行到return语句直接结束
        mj = j;
        mStatus = true;
    }

    int getMI() {
        return mi;
    }
    int getMJ() {
        return mj;
    }
    bool getStatus() {
        return mStatus;
    }
};

int main()
{
    Test t1(1, 2);

    if (t1.getStatus()) {
        printf("t1.mi = %d\n", t1.getMI());
        printf("t1.mj = %d\n", t1.getMJ());
    }

    return 0;
}