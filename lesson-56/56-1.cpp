#include <string>
#include <iostream>
using namespace std;

// 使用宏交换两个数据
#define SWAP(type, a, b)    \
do {                        \
    type t = a;             \
    a = b;                  \
    b = t;                  \
} while(0);

int main()
{
    int a = 100;
    int b = 200;

    SWAP(int, a, b);
    cout << "a = " << a << endl;  // 200
    cout << "b = " << b << endl;  // 100

    double d1 = 3.14;
    double d2 = 9.85;

    SWAP(double, d1, d2);
    cout << "d1 = " << d1 << endl;  // 9.85
    cout << "d2 = " << d2 << endl;  // 3.14

    string s1 = "scott";
    string s2 = "july";

    SWAP(string, s1, s2);
    cout << "s1 = " << s1 << endl;  // july
    cout << "s2 = " << s2 << endl;  // scott

    return 0;
}