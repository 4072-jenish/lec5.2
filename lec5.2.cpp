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
