void count()
{
	static int i=1;
	printf("%d ",i++);
}
int main()
{
	int i;
	for(i=1;i<=10;i++)
		count();
}
