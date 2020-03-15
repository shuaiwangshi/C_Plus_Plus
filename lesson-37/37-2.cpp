#include <iostream>
using namespace std;
#include <malloc.h>

class Test
{
public:
    ~Test()
    {
        cout << "~Test()" << endl;
    }
};

int main()
{
    Test *p = (Test *)0x1ee1010;
    // Test *p = (Test *)NULL;  

    // cout << p << endl;

    delete p;

    // free((int *)0x1ee1010);
    // free((Test *)0x1ee1010);
    // free(NULL);
    // delete((int *)0x1ee1010);  
    // delete (Test *)NULL;  // 不会调用析构函数
    // delete (Test *)0x1ee1010;  // 会调用析构函数

    Test *pp = NULL;

    delete pp;


    // 重复释放同一块堆空间    double free
    // 释放一个未申请的堆空间  段错误  

    return 0;
}