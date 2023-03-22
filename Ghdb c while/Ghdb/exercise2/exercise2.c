#include<stdio.h>
int main(){
int n;
int sum=0;
int x;
printf("Enter n:");
scanf("%d",&n);
for(x=1;x<=n;x=x+1){
	sum=sum+x;
}
printf("Sum of natural numbers between 1-%d: %d\n",n,sum);
}
