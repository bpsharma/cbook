/*
Write a program to input a string and show length of its, upper case, lower case and reverse of it.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],temp[100];
	printf("Enter a string : ");
	gets(str);
	printf("Length of %s is %d\n",str,strlen(str));
	strcpy(temp,str);
	printf("Reverse of %s is %s\n",str,strrev(temp));
	strcpy(temp,str);
	printf("Upper case of %s is %s\n",str,strupr(temp));
	printf("Lower case of %s is %s\n",str,strlwr(temp));
}

