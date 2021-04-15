#include<stdio.h>

#define expr(operand) printf("Result of expression " #operand " is %d\n",operand);

void main()
{
	expr(5+6*7-4);
}


