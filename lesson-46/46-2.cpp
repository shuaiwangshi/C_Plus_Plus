#include <iostream>

using namespace std;

class Object
{
public:
    Object(string s)
    {
        cout << "Object(string s) : " << s << endl;
    }
    ~Object()
    {
        cout << "~Object()" << endl;
    }
};

class Parent : public Object
{
public:
    Parent() : Object("Default")
    {
        cout << "Parent()" << endl;
    }
    Parent(string s) : Object(s)
    {
        cout << "Parent(string s) : " << s << endl;
    }
    ~Parent()
    {
        cout << "~Parent()" << endl;
    }
};

class Child : public Parent
{
    Object mO1;
    Object mO2;

public:
    Child() : mO1("Default 1"), mO2("Default 2")
    {
        cout << "Child()" << endl;
    }
    Child(string s) : Parent(s), mO1(s + " 1"), mO2(s + " 2")
    {
        cout << "Child(string s) : " << s << endl;
    }
    ~Child()
    {
        cout << "~Child()" << endl;
    }
};

int main()
{
    Child c;
    // Parent()
    // Child()

    cout << endl;

    Child cc("cc");
    // Parent(string s) : cc
    // Child(string s) : cc

    return 0;
}


// Object(string s) : Default
// Parent()
// Object(string s) : Default 1
// Object(string s) : Default 2
// Child()


// Object(string s) : cc
// Parent(string s) : cc
// Object(string s) : cc 1
// Object(string s) : cc 2
// Child(string s) : cc
