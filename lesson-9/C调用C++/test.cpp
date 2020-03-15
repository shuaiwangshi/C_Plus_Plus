#include <stdio.h>

extern "C"
{
	int add(int a, int b)
	{
		return a + b;
	}
}

int main()
{

	printf("%d\n", add(10, 2));

	return 0;
}

