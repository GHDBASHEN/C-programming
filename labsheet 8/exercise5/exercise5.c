#include<stdio.h>
int factLoop(int n);
int main(){
	int n;
	printf("Insert number:");
	scanf("%d",&n);
	printf("Factorial:%d\n",factLoop(n));
	return 0;
}
int factLoop(int n){
	int x=1;
	for(int i=1;i<=n;i++){
		x=x*i;
		}
	return x;
	
	}
