#include<stdio.h>
int main(){
int a;
int b;
int x;
char oper;

printf("Enter the first Number:");
scanf("%d",&a);
printf("Enter operator:");
scanf(" %c",&oper);
printf("Enter the second Number:");
scanf("%d",&b);
switch(oper)
{
case '+' :
	x=a+b;
	break;
case '-' :
	x=a-b;
	break;
case '/' :
	x=a/b;
	break;
case '*' :
	x=a*b;
	break;
default :
	printf("Error\n");
}
printf("Answer:%d\n",x);
return 0;
}
