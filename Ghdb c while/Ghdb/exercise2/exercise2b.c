#include<stdio.h>
int main(){
int n;
int sum=0;
int m;
printf("Enter m:");
scanf("%d",&m);
printf("Enter n:");
scanf("%d",&n);
for(m;m<=n;m=m+1){
	sum=sum+m;
}
printf("Sum of natural numbers between 1-%d: %d\n",n,sum);
}
