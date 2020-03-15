#include <iostream>
using namespace std;

template <typename T>  // 第一次编译
void Swap(T& a, T& b)
{
    T t = a;  // 如果T是类，这里会调用拷贝构造函数
    a = b;    // 如果这里缺少分号，编译就会报错
    b = t;
}

class Test
{
    Test(const Test&);  // 前面T t = a; 在第二次编译时因为拷贝构造函数是private，编译会报错
public:
    Test()
    {

    }
};

typedef void (FuncI)(int&, int&);
typedef void (FuncD)(double&, double&);
typedef void (FuncT)(Test&, Test&);

int main()
{
    // 第二次编译
    // 编译器做了三件事情：(1)编译器进行自动类型推导 (2)编译器产生一个实实在在的函数 (3)将实际生成的函数地址赋值给pi/pd/pt
    FuncI *pi = Swap;  // 编译器自动推导出 T 为 int
    FuncD *pd = Swap;  // 编译器自动推导出 T 为 double
    // FuncT *pt = Swap;  // 编译器自动推导出 T 为 Test类

    // 需要将函数指针强制类型转换为void *类型，不转换为void *的话打印结果为1
    // https://stackoverflow.com/questions/2064692/how-to-print-function-pointers-with-cout
    cout << "pi = " << reinterpret_cast<void*>(pi) << endl;  // pi = 0x400964
    cout << "pd = " << reinterpret_cast<void*>(pd) << endl;  // pd = 0x400990
    // cout << "pt = " << reinterpret_cast<void*>(pt) << endl;  // pt = 0x4009f5

    return 0;
}