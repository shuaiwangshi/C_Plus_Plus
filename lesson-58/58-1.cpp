#include <iostream>
#include <string.h>
    
using namespace std;

template <typename T>  // 第一次编译，对函数模板进行编译
class Operator
{
public:
    T add(T a, T b)
    {
        return a + b;
    }
    T subtract(T a, T b)
    {
        return a - b;
    }
    T multiply(T a, T b)
    {
        return a * b;
    }
    T divide(T a, T b)
    {
        return a / b;
    }
};

// 重载string的 - 操作符
string operator-(string& s1, string&s2)
{
    return "subtract";
}

int main()
{
    Operator<int> op1;
    cout << op1.add(1, 2) << endl;
    cout << op1.subtract(5, 2) << endl;
    cout << op1.multiply(6, 2) << endl;
    cout << op1.divide(10, 2) << endl;

    Operator<string> op2;  // 在定义类对象时，进行第二次编译，这次编译只编译构造函数，并不会编译其它成员函数
                           // 因此，当T为string类型时，成员函数中对string的 -(subtract) *(multiply) /(divide) 操作并没有报错

    cout << op2.add("scott", ".shi") << endl;       // 二次编译，编译add函数，string类重载了+操作符
    cout << op2.subtract("scott", ".shi") << endl;  // 二次编译，编译subtract函数，由于没有重载 - ，所以编译会报错

    return 0;
}