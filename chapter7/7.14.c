int fib(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
int main()
{
	int num,i;
	printf("Numbers in series : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		printf("%d ",fib(i));
}

