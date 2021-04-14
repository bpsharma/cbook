int a=5; /*global variable*/
int main()
{
	int b=6; /* local to function */
	{
		int c=7; /* local to block */
		printf("%d %d %d\n",a,b,c);
	}	
	printf("%d %d\n",a,b); /* c is not accessible here*/
}

