#include<stdio.h>
int main (){
int ICT,SFT,ET,BST,ENG;
printf("enter marks for 5 subjects\n");
scanf("%d",&ICT);
scanf("%d",&SFT);
scanf("%d",&ET);
scanf("%d",&BST);
scanf("%d",&ENG);
int sum=ICT+SFT+ET+BST+ENG;
double avg=sum/5.0;
if(avg>=80){
 	printf("Percentage:%.2lf\n",avg);
 	printf("Grade : A\n");
}
else if(avg>=70){
	printf("Percentage:%.2lf\n",avg);
	printf("Grade : B\n");
}
else if(avg>=50){
	printf("Percentage:%.2lf\n",avg);
	printf("Grade : C\n");
}
else if(avg>=40){
	printf("Percentage:%.2lf\n",avg);
	printf("Grade : D\n");
}
else if(avg>=30){
	printf("Percentage:%.2lf\n",avg);
	printf("Grade : E\n");
}
else {
	printf("Percentage:%.2lf\n",avg);
	printf("Grade : F\n");
}
return 0;
}

