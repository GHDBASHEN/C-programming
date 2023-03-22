#include<stdio.h>
int main(){
int f;
int a=1;
printf("Input the number:");
scanf("%d",&f);
for(int count=1;count<=f;++count){
	a=a*count;
	}
printf("The Factorial of %d is:%d\n",f,a);
return 0;
}
