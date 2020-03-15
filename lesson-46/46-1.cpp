#include <iostream>

using namespace std;

class Parent 
{
public:
    Parent()
    {
        cout << "Parent()" << endl;
    }
    Parent(string s)
    {
        cout << "Parent(string s) : " << s << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child()" << endl;
    }
    Child(string s) : Parent(s)
    {
        cout << "Child(string s) : " << s << endl;
    }
};

int main()
{
    Child c;
    // Parent()
    // Child()

    Child cc("cc");
    // Parent(string s) : cc
    // Child(string s) : cc

    return 0;
}