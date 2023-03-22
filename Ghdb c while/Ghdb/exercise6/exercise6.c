#include<stdio.h>
int main(){
int x;
int y,z;
float res;
do{
printf("My Calculator\n");
printf("-----------------------------\n");
printf("1.\tAddition\n");
printf("2.\tSubstraction\n");
printf("3.\tMultiplication\n");
printf("4.\tDivision\n");
printf("5.\tExit\n");
printf("Enter your option:");
scanf("%d",&x);


switch(x){
case 1:
printf("Enter Numbers:");
scanf("%d%d",&y,&z);
	res=y+z;
	printf("\n\nThe result is:%.2f\n",res);
	break;
case 2:
printf("Enter Numbers:");
scanf("%d%d",&y,&z);
	res=y-z;
	printf("\n\nThe result is:%.2f\n",res);
	break;
case 3:
printf("Enter Numbers:");
scanf("%d%d",&y,&z);
	res=y*z;
	printf("\n\nThe result is:%.2f\n",res);
	break;
case 4:
printf("Enter Numbers:");
scanf("%d%d",&y,&z);
	res=y/z;
	printf("\n\nThe result is:%.2f\n",res);
	break;
case 5:
	break;
default:
	printf("Insert valid number!\n");
	break;
}}
while(x!=5);
return 0;
}
	
