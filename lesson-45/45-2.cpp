#include <iostream>
#include <string>

using namespace std;

class Parent
{
protected:
    int m_a;
protected:
    int m_b;
public:
    int m_c;
    
    void set(int a, int b, int c)
    {
        m_a = a;
        m_b = b;
        m_c = c;
    }
};

class Child_A : public Parent
{
public:
    void print()
    {
        cout << "m_a" << m_a << endl;
        cout << "m_b" << m_b << endl;
        cout << "m_c" << m_c << endl;
    }
};

class Child_B : protected Parent
{
public:
    void print()
    {
        cout << "m_a" << m_a << endl;
        cout << "m_b" << m_b << endl;
        cout << "m_c" << m_c << endl;
    }
};

class Child_C : private Parent
{
public:
    void print()
    {
        cout << "m_a" << m_a << endl;
        cout << "m_b" << m_b << endl;
        cout << "m_c" << m_c << endl;
    }
};

int main()
{   
    Child_A a;
    Child_B b;
    Child_C c;
    
    a.m_c = 100;
    // b.m_c = 100;    // Child_B 保护继承自 Parent， 所以所有的 public 成员全部变成了 protected 成员， 因此外界无法访问
    // c.m_c = 100;    // Child_C 私有继承自 Parent， 所以所有的成员全部变成了 private 成员， 因此外界无法访问
    
    a.set(1, 1, 1);
    // b.set(2, 2, 2);
    // c.set(3, 3, 3);
    
    a.print();
    b.print();
    c.print();
    
    return 0;
}
