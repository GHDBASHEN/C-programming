#include<stdio.h>
int main(){
int a;
int x;
printf("Insert Numbers:");
scanf("%d",&x);
int max=x;
int count=1;
do{
	printf("Insert Numbers:");
	scanf("%d",&x);
	if (x>=max){
		max=x;}
	count++;
	}
while(count<10);
printf("Maximum Number is:%d\n",max);
return 0;
}
