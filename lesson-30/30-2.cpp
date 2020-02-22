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

    int getReal()
    {
        return real;
    }
    int getImage()
    {
        return image;
    }

    friend Complex operator +(Complex &c1, Complex &c2);
};

Complex operator +(Complex &c1, Complex &c2)
{
    Complex ret;

    ret.real = c1.real + c2.real;
    ret.image = c1.image + c2.image;

    return ret;
}


int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);

    // Complex c3 = operator +(c1, c2);
    Complex c3 = c1 + c2;  // 操作符重载


    cout << "c3.real = " << c3.getReal() << endl;
    cout << "c3.image = " << c3.getImage() << endl;

    return 0;
}