#include<stdio.h>
int factRecursion(int n);
int main(){
	int n;
	printf("Insert number:");
	scanf("%d",&n);
	int x=factRecursion(n);
	printf("Factorial:%d\n",x);
	return 0;
}
int factRecursion(int n){
	if (n==0){
		return 1;
	
	}
	else{
		return n*factRecursion(n-1);
	}
	
	}
	
