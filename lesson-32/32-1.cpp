#include <stdio.h>

const char endl = '\n';

class Console
{
// private:
//     int mi;
public:
    Console& operator << (int i)
    {
        printf("%d", i);

        return *this;
    }

    Console& operator << (char c)
    {
        printf("%c", c);

        return *this;
    }
};

Console cout;

int main()
{

    // cout << 1;  // cout.operator<<(1);

    // cout << '\n';

    // *(*(cout << 1) << 2) << 3;

    cout << 1 << endl;

    return 0;
}