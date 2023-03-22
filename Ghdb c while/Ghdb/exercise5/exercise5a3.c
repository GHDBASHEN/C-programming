#include<stdio.h>
int main(){
for(int i=1;i<=5;i++){
	for(int x=5;x>=i;x--){
		printf("*");
	}
	printf("\n");
}
return 0;
}
