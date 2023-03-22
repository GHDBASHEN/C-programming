#include<stdio.h>
int calcCost(char x,int y);
int main(){
char x;
int y;
printf("Insert  Product(A,B,C,D):");
	scanf("%c",&x);
printf("Insert amount of Product(A,B,C,D):");
	scanf("%d",&y);
	int f= calcCost(x,y);
printf("Cost of product=%d\n",f);
return 0;
}
int calcCost(char x,int y){
int total;
	switch(x){
		case 'A':
			total=50*y;
			break;
		case 'B':
			total=100*y;
			break;
		case 'C':
			total=70*y;
			break;
		case 'D':
			total=180*y;
			break;
		default:
			break;
		}
return total;
}
