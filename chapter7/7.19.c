#include<math.h>
#include<stdio.h>
void multiresult(double num, double *sqroot, double *cbroot)
{
	*sqroot=pow(num,1.0/2);
	*cbroot=pow(num,1.0/3);
}
int main()
{
	double n,sroot,croot;
	printf("Enter a number : ");
	scanf("%lf",&n);
	multiresult(n,&sroot,&croot);
	printf("Square root is %lf\n",sroot);
	printf("Cube root is %lf\n",croot);
}


