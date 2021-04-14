int a=5; /* global */
int main()
{
	int a=6; /* local to function */
	{
		int a=7; /* local to block */
		printf("%d %d ",a,::a);
	}
	printf("%d %d",a,::a);
}
