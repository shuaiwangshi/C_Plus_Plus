#include <iostream>
#include <string>

using namespace std;

class Parent{

};

class Child_A : public Parent
{

};

class Child_B : protected Parent
{

};

class Child_C : private Parent
{

};


int main()
{
    
    return 0;
}