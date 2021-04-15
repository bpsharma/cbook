#include<stdio.h>
#include<conio.h>
#define CHECK_ZERO(divisor)\
	if(divisor==0)\
	{\
		printf("\n*** Attempt to divide by zero on line %d in File %s ***\n\n", __LINE__,__FILE__);\
		getch();return 0;\
	}
int main()
{
int a,b;
float d;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
CHECK_ZERO(b);d=(float)a/b;
printf("Division is : %g",d);
}



