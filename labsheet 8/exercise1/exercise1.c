#include<stdio.h>
int max();
int main(){
int maximum;
maximum=max();
printf("\nMaximum =%d\n",maximum);
return 0;
}

int max(){
	int a,b,c;
	int x;
	printf("Insert  number=");
	scanf("%d",&a);
	printf("Insert number=");
	scanf("%d",&b);
	printf("Insert  number=");
	scanf("%d",&c);
	if((a>b)&&(a>c)){
		x=a;
		}
	else if (b>c){
		x=b;
		}
	else {
		x=c;
		}
return x;
}
