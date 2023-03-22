#include<stdio.h>
#include<math.h>
int my_add(int a,int c);
int my_multi(int b,int d);
int my_square(int sum);

int main(){
	int a=4;
	int b=5;
	int c=3;
	int d=7;
	int num1=my_add(a,c);
	int num2=my_multi(b,d);
	int sum=num1+num2;
	int last=my_square(sum);
	
	printf("Answer=%d\n",last);
	
	return 0;
	
}	
int my_add(int a,int c){
	int z=a*c;
	return z;
}
int my_multi(int b,int d){
	int y=b*d;
	return y;
}
int my_square(int sum){
	int x=pow(sum,2);
	return x;
	

}

