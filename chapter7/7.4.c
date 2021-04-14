/*
Write a program to run calculate, notepad and command window.
*/
#include<stdio.h>
#include<process.h>
int main()
{
	int choice;
	for(;;)
	{
		printf("\n>>>> Main Menu <<<<");
		printf("\n1 : Calculate");
		printf("\n2 : Notepad");
		printf("\n3 : Command Window");
		printf("\n4 : Exit");
		printf("\nEnter Choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: system("calc");break;
			case 2: system("notepad");break;
			case 3: system("cmd");break;
			case 4: exit(0);
		}
	}
}


