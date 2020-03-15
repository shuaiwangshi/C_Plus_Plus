#include <iostream>
#include "Operator.h"

using namespace std;

int main()
{
    Operator<int> op;
    cout << op.add(1, 2) << endl;
    cout << op.subtract(6, 2) << endl;
    cout << op.multiply(6, 2) << endl;
    cout << op.divide(10, 2) << endl;

    return 0;
}