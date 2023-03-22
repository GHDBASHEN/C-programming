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
if(oper=='+')
{
	x=a+b;
}
	
else if(oper=='-')
{
	x=a-b;
}
else if(oper=='/')
{
	x=a/b;
}	
else if(oper=='*')
{
	x=a*b;
}	
else
{
	printf("Error\n");
}
printf("Answer:%d\n",x);
return 0;
}
