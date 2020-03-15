#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
T1 add(T2 a, T3 b)
{
    return static_cast<T1>(a + b);
}

int main()
{
    // T1 ==> int  T2 ==> double T3 ==> double
    int ret1 = add<int>(0.5, 0.8);
    cout << "ret1 = " << ret1 << endl;  // 1

    // T1 ==> double T2 ==> float T3 ==> double
    double ret2 = add<float, double>(0.5, 0.8);
    cout << "ret2 = " << ret2 << endl;  // 1.3

    // T1 ==> float T2 ==> float T3 ==> float
    float ret3 = add<float, float, float>(0.5, 0.8);
    cout << "ret3 = " << ret3 << endl;  // 1.3


    return 0;
}