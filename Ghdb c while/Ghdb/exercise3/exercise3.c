#include<stdio.h>
int main(){
int a;
int sum=0;
int count=0;
float avg;
while (count<4){
	printf("Insert subject marks:");
	scanf("%d",&a);
	sum=sum+a;
	count++;
	}
avg=sum/4.0;
if(avg>=45){
	printf("Pass\n");
	}
else{
	printf("Fail\n");
}
return 0;
}
