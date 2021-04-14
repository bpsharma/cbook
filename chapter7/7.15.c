int pt(int r, int c)
{
	if(c==1)
		return 1;
	else if(r==c)
		return 1;
	else
		return pt(r-1,c)+pt(r-1,c-1);
}
int main()
{
	int num,r,c;
	printf("Enter rows in triangle : ");
	scanf("%d",&num);
	for(r=1;r<=num;r++)
	{
		for(c=1;c<=r;c++)
			printf("%d ",pt(r,c));
		printf("\n");
	}
}

