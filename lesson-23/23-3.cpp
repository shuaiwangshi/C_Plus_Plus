#include <stdio.h>

class Test
{
    int mi;
public:
    Test(int i) {
        printf("Test(int i) : %d\n", i);
        mi = i;
    }
    Test(const Test& t) {
        printf("Test(const Test& t) : %d\n", t.mi);
        mi = t.mi;
    }
    Test() {
        printf("Test()\n");
        mi = 0;
    }
    ~Test() {
        printf("~Test()\n");
    }

    void getMI() {
        printf("mi = %d\n", mi);
    }
};

Test func()
{
    return Test(20);
}

int main()
{
    // Test t = Test(10); // ==> Test t = 10;
    // Test tt = func();  // ==> Test tt = Test(20); ==> Test tt = 20;

    Test t = Test(10);
    Test tt = func();
    
    t.getMI();
    tt.getMI();
    
    return 0;
}
