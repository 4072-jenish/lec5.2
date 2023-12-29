#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int a,b,c,d;
	printf("Enter the Value of A: ");
	scanf("%d",&a);
	printf("Enter the Value of B: ");
	scanf("%d",&b);
	printf("Enter the Value of C: ");
	scanf("%d",&c);
	printf("Enter the Value of D: ");
	scanf("%d",&d);
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is Maximum..");
			}else{
				printf("D is Maximum..");
			}
		}
	}else if(b>c){
		if(b>d){
			printf("B is Maximum..");
		}else{
			printf("D is Maximum..");
		}
	}else{
		if(c>d){
			printf("C is Maximum..");
		}else if(c<d){
			printf("D is Maximum..");
		}else{
			printf("Enter Valid Numbers..");
		}
	}
	getch();
}

