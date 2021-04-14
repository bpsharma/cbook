int main()
{
	static int i=1,f=1;
	f= f * i;
	if(i<6)
	{
		i++;
		main();
	}
	else
	{
		printf("Factorial of 6 is %d",f);
	}
}


