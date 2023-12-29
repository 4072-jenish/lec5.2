/*
Q.1 Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book.
For example,
Input:
Enter a value of the first number: 8
Enter a value of the second number: 3
Enter a value of the third number: 12

Output:
The minimum value is: 3
*/
#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int a,b,c;
	printf("Enter the Value of A: ");
	scanf("%d",&a);
	printf("Enter the Value of B: ");
	scanf("%d",&b);
	printf("Enter the Value of C: ");
	scanf("%d",&c);
	if(a<b){
		if(a<c){
			printf("A is Minimum..");
		}else{
			printf("C is Minimum..");
		}
	}else{
		if(b<c){
			printf("B is Minimum..");
		}else{
			printf("C is Minimum..");
		}
	}
	getch();
}
