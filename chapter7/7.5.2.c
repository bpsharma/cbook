/* Write a program to input a number and show factorial and cube of that number */

long factorial(int n) /* formal argument */
{
	long f=1;int i;
	for(i=1;i<=n;i++)
		f=f*i;
	return f;
}
void cube(int n)
{
	printf("Cube of %d is %d\n",n,n*n*n);
}
int main()
{
	int num;
	printf("Enter a number : "); scanf("%d",&num);
	cube(num); /* actual argument */
	printf("Factorial of %d is %ld\n",num, factorial(num));
}



