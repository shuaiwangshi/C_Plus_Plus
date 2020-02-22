#include <stdio.h>
#include "Operator.h"

int main(void)
{
	Operator calculate;
	double r;
	
	calculate.setOperator('/');
	calculate.setParameter(10, 5);
	calculate.result(r);
	
	printf("r = %lf\n", r);

	return 0;
}