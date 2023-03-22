#include<stdio.h>
int main(){
int x;
int max=0;
for(int count=1;count<=10;count++){
	printf("Insert Numbers:");
	scanf("%d",&x);
	if (x>=max){
		max=x;}

	}
printf("Maximum Number is:%d\n",max);
return 0;
}
