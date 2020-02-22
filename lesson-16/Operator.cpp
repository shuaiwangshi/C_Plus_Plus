#include "Operator.h"

bool Operator::setOperator(char op)
{
	bool ret = false;
	
	if( (op == '+') || (op == '-') || (op == '*') || (op == '/'))
	{
		ret = true;
		mOp = op;
	}
	else
	{
		mOp = '\0';
	}
}

void Operator::setParameter(double p1, double p2)
{
	mP1 = p1;
	mP2 = p2;
}

bool Operator::result(double& r)	//既要返回计算结果，也要返回状态  状态用return  结果用指针传参或者C++的引用
{
	bool ret = true;
	
	switch( mOp )
	{
		case '/':
			if( (-0.000001 < mP2) && (mP2 < -0.000001))
			{
				ret = false;
			}
			else
			{
				r = mP1 / mP2;
			}
			break;
		case '+':
			r = mP1 + mP2;
			break;
		case '*':
			r = mP1 * mP2;
			break;
		case '-':
			r = mP1 - mP2;
			break;
		default:
			ret = false;
			break;
	}
}
