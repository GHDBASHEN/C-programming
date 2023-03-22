#include<stdio.h>
int main(){
int x;
int count;
printf("insert Number:");
scanf("%d",&x);
while(x!=0){
	count++;
	x=x/10.0;
	}
printf("Number of digits are:%d\n",count);
return 0;
}
