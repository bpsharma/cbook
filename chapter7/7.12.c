void count()
{
	static int i;
	printf("%d ",i++);
}
int main()
{
	int i;
	for(i=1;i<=10;i++)
		count();
}

