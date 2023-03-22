#include<stdio.h>
int SumRecursion(int n);
int main(){
	int n;
	printf("Insert number:");
	scanf("%d",&n);
	int x=SumRecursion(n);
	printf("Sum of all natural number between 1 to %d:%d\n",n,x);
	return 0;
}
int SumRecursion(int n){
	if (n==1){
		return 1;
	
	}
	else{
		return n+SumRecursion(n-1);
	}
	}
	
