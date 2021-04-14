#include<stdarg.h>
int sum(int argc,...)
{
	int s=0,i,n;
	va_list ptr;
	va_start(ptr,argc);
	for(i=0;i<argc;i++)
	{
		n=va_arg(ptr,int);
		s+=n;
	}
	return s;
}
int main()
{
	int s=sum(4,5,8,9,3);
	printf("Sum is %d ",s);
}


