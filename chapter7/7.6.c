void sum(int a, int b)
{
	printf("Sum of %d and %d is %d\n",a,b,a+b);
}
void product(int a, int b)
{
	printf("Product of %d and %d is %d\n",a,b,a*b);
}
int main()
{
	void (*fp)(int,int);
	void (*dp)();
	fp=&sum; //pointing to sum function
	fp(4,5);
	fp=&product; //pointing to product function
	fp(8,9);
}



