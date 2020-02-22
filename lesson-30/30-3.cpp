#include <iostream>

using namespace std;

class Complex{
    int real;
    int image;
public:
    Complex(int real = 0, int image = 0)  // 默认参数 ==> Complex()
    {
        this->real = real;
        this->image = image;
    }

    Complex operator+(Complex &c)
    {
        Complex ret;

        ret.real = this->real + c.real;
        ret.image = this->image + c.image;

        return ret;
    }

    int getReal() {
        return real;
    }
    int getImage() {
        return image;
    }
};

// 全局操作符重载函数和类成员重载函数同时存在编译器优先使用类中的
/*
Complex operator +(Complex &c1, Complex &c2)
{
    Complex ret;

    ret.real = c1.real + c2.real;
    ret.image = c1.image + c2.image;

    return ret;
}
*/


int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;  // 等价于 c1.operator+(c2)

    cout << "c3.real = " << c3.getReal() << endl;
    cout << "c3.image = " << c3.getImage() << endl;

    return 0;
}