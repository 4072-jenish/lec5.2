#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int a,b,c,d,e,f;
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
	printf("Enter the Value of F: ");
	scanf("%d",&f);
	if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					if(a>f){
						printf("A has Maximum Value..");
					}else{
						printf("F has Maximum Value..");
					}
				}
			}
		}
	}else if(b>c){
		if(b>d){
			if(b>e){
				if(b>f){
					printf("B has Maximum Value..");
				}else{
					printf("F has Maximum Value..");
				}
			}
		}
	}else if(c>d){
		if(c>e){
			if(c>f){
				printf("C has Maximum Value..");
			}else{
				printf("F has Maximum Value..");
			}
		}
	}else if(d>e){
		if(d>f){
			printf("D has Maximum Value..");
		}else{
			printf("F has Maximum Value..");
		}
	}else{
		if(e>f){
			printf("E has Maximum Value..");
		}else if(e<f){
			printf("F has Maximum Value..");
		}else{
			printf("Kindly Enter Correct Values..");
		}
	}
	getch();
}

