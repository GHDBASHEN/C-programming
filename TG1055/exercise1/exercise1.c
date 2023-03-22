#include<stdio.h>
int main() {
int age;
int height;
printf("Enter age=");
scanf("%d",&age);
printf("Enter Height=");
scanf("%d",&height);
if (age > 18 && height >= 5){
	printf("candidate is selected");
}
else{
	printf("Not selected");
}
return 0;
}



		
