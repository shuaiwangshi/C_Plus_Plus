#include <iostream>
#include <string>

using namespace std;

template < typename T1, typename T2 >
class Test
{
public:
    void add(T1 a, T2 b)
    {
        cout << "void add(T1 a, T2 b)" << endl;
        cout << a + b << endl;
    }
};

template < typename T1, typename T2 >  // 指针的特化
class Test < T1*, T2* >  // 定义对象时，要用<xx, xx>匹配这里，得到T1和T2的类型
{
public:
    void add(T1* a, T2* b)
    {
        cout << "void add(T1* a, T2* b)" << endl;
        cout << *a + *b << endl;
    }
};

template < >
class Test < void*, void*>  // 当 T1 == void* 并且 T2 == void* 时
{
public:
    void add(void* a, void* b)
    {
        cout << "void add(void* a, void* b)" << endl;
        cout << "Error to add void* param..." << endl;
    }
};

template < typename T>
class Test <T, T>    // 当 Test 类模板的两个类型参数完全相同时，使用这个实现
{
public:
    void add(T a, T b)
    {
        cout << "void add(T a, T b)" << endl;
        cout << a + b << endl;
    }    
};

int main()
{
    Test<int, float> t1;
    t1.add(10, 0.5);

    Test<int*, float*> t2;   // 匹配class Test <T1*, T2*>  ==>  T1为int，T2为float
    int i = 10;
    float f = 3.14;
    t2.add(&i, &f);

    Test<long, long> t3;
    t3.add(10, 20);

    Test<void*, void*> t4;
    t4.add(NULL, NULL);

    return 0;
}
