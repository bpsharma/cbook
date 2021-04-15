#include <stdio.h>

#define P(i) printf("Data in num%d is %d\n",i, num##i);

int main()
{
	int num1=5,num2=6,num3=9;
	P(1);P(2);P(3);
}


