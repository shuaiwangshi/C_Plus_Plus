#include <stdio.h>

class ClassC
{
    const char* n;
public:
    ClassC(const char* n)
    {
        this->n = n;
    }
    
    friend class ClassB;
};

class ClassB
{
    const char* n;
public:
    ClassB(const char* n)
    {
        this->n = n;
    }
    
    void getClassCName(ClassC& c)
    {
        printf("c.n = %s\n", c.n);
    }
    
    friend class ClassA;
};

class ClassA
{
    const char* n;
public:
    ClassA(const char* n)
    {
        this->n = n;
    }
    
    void getClassBName(ClassB& b)
    {
        printf("b.n = %s\n", b.n);
    }
    /*
    void getClassCName(ClassC& c)   // 友元不具有传递性
    {
        printf("c.n = %s\n", c.n);
    }
    */
};

int main()
{
    ClassA A("A");
    ClassB B("B");
    ClassC C("C");
    
    A.getClassBName(B);
    B.getClassCName(C);
    
    return 0;
}