#include<stdio.h>
int main(){
int value;
int num;
printf("Please enter the bill value:");
scanf("%d",&value);
if(value>10000){
	printf("Please Select a number from a raffel box:");
	scanf("%d",&num);
	}
	if(num==1){
		printf("congratulations!! you have won a Tea Set\n");
		}
	else if(num==2){
		printf("congratulations!! you have won a Spoun Set\n");
		}
	else if(num==3){
		printf("congratulations!! you have won a Non Stick Pan\n");
		}
	else if(num==4){
		printf("congratulations!! you have won a Bowl\n");
		}
	else{
		printf("Invalid Number\n");
		}
return 0;
}
