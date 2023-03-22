#include<stdio.h>
int main(){
int num;
printf("Enter number to print the table of: ");
scanf("%d",&num);
for(int count=1;count<=10;count++){
	int x=num*count;
	printf("\n%d * %d = %d\n",num,count,x);
	}
return 0;
}
	
