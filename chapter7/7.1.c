/*
Write a program to input a character and check it to be alphabet, digit or special character. 
If an alphabet, check it to be upper case alphabet or lower case alphabet.
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character : ");
	ch=getchar();
	if(isalpha(ch))
	{
		if(isupper(ch))
			printf("%c is an upper alphabet",ch);
		else
			printf("%c is a lower alphabet",ch);
	}
	else if(isdigit(ch))
		printf("%c is a digit",ch);
	else
		printf("%c is special character",ch);
}

