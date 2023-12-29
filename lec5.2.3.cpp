#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int a,b,c,d,e;
	printf("Enter the Value of A: ");
	scanf("%d",&a);
	printf("Enter the Value of B: ");
	scanf("%d",&b);
	printf("Enter the Value of C: ");
	scanf("%d",&c);
	printf("Enter the Value of D: ");
	scanf("%d",&d);
	printf("Enter the Value of E: ");
	scanf("%d",&e);
	if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					printf("A has Maximum Value..");
				}else{
					printf("E has Maximum Value..");
				}
			}
		}
	}else if(b>c){
		if(b>d){
			if(b>e){
				printf("B has Maximum Value..");
			}else{
				printf("E has Maximum Value..");
			}
		}
	}else if(c>d){
		if(c>e){
			printf("C has Maximum Value..");
		}else{
			printf("E has Maximum Value..");
		}
	}else{
		if(d>e){
			printf("D has Maximum Value..");
		}else if(d<e){
			printf("E has Maximum Value..");
		}else{
			printf("Please Enter Valid Number..");
		}
	}
	getch();
}

