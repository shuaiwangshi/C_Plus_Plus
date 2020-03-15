#include <iostream>
using namespace std;

class Parent
{
public:
    int mi;
};

class Child : public Parent
{
public:
    char mi;  // 只要同名即可，类型不一定要相同
};

int main()
{
    Child c;

    return 0;
}

// 可以正常编译