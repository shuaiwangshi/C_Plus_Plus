#include <iostream>

using namespace std;

class Complex{
public:
    int real;
    int image;
};

Complex Add(Complex &c1, Complex &c2)
{
    Complex ret;

    ret.real = c1.real + c2.real;
    ret.image = c1.image + c2.image;

    return ret;
}

int main()
{
    Complex c1 = {1, 2};   // 这里初始化怎么调用构造函数的？
    Complex c2 = {3, 4};

    Complex c3 = Add(c1, c2);  // 拷贝构造函数

    cout << "c3.real = " << c3.real << endl;
    cout << "c3.image = " << c3.image << endl;

    return 0;
}