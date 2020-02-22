#include <stdio.h>

class A;

class B {
public:
    int func(A &a);
};

class A {
private:
    int mi;
public:
    A () : mi(10) 
    {

    }
    friend class B;
    // friend int B::func(A &a);
};

int B::func(A &a)
{
    return a.mi;
}


int main()
{
    A a;
    B b;

    printf("%d\n", b.func(a));

    return 0;
}