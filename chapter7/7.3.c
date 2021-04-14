/*
Write a program which takes a number , show the given menu and perform action as per choice.
>>> Main Menu <<<
1. Show the Square
2. Show the Cube
3. Show the Square Root
4. Show the Cube Root
5. Quite Application
*/
#include<stdio.h>
#include<math.h>
#include<process.h>
int main(){
	int n,choice;
	printf("Enter a number : ");scanf("%d",&n);
	for(;;){
		printf(">>> Main Menu <<<\n");
		printf("1. Show the Square\n");
		printf("2. Show the Cube\n");
		printf("3. Show the Square Root\n");
		printf("4. Show the Cube Root\n");
		printf("5. Quite Application\n");
		printf("Enter choice : ");scanf("%d",&choice);
		switch(choice){
			case 1: printf("Square of %d is %d\n",n,n*n);break;
			case 2: printf("Cube of %d is %d\n",n,n*n*n);break;
			case 3: printf("Square root of %d is %.2f\n",n,sqrt(n));
			case 4: printf("Cube root of %d is %.2f\n",n,pow(n,1.0/3));
			case 5: exit(0);
			default: printf("Invalid Choice\n");
		}
	}
}
