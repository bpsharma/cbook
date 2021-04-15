#include <stdio.h>

#define factorial() 		int n,i,f=1; printf("Enter a number: ");\
							scanf("%d",&n);\
							for(i=1;i<=n;i++) f=f*i;\
							printf("Factorial of %d is %d",n,f);						
main(){
	factorial();
}

