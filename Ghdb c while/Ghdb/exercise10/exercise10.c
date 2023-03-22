#include<stdio.h>
int main(){
int x;
int count=1;
int sum=0;
printf("Insert a Value:");
scanf("%d",&x);
while(count<=x){
	sum=sum+count;
	count=count+2;
}
printf("Sum of all ods:%d\n",sum);
return 0;
}
