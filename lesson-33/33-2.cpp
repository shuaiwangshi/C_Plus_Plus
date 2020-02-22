#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    const char *pc = "666.888";
    // istringstream iss("123.456");
    istringstream iss(pc);
    double d;

    iss >> d;
    cout << d << endl;


    ostringstream oss;

    oss << d;
    cout << oss.str() << endl;

    return 0;
}