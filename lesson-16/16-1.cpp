#include <stdio.h>

int j = 0;

struct A {	//默认情况下访问级别是public
	int i;
	
	int getI() {
		return i;
	}
};

class B {	//默认情况下访问级别是private
// public:
	int i;
	
	int getI() {
		return j;
	}
};

int main(void)
{
	A a;
	B b;
	
	a.i = 10;
	
	printf("a.getI() = %d\n", a.getI());
	
	b.i = 10;
	
	printf("b.getI() = %d\n", b.getI());
	
	return 0;
}