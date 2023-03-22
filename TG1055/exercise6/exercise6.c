#include<stdio.h>
int main(){
int cusno;
float unit;
float charge;
printf("Enter the customer number:");
scanf("%d",&cusno);
printf("Enter the power consumed:");
scanf("%f",&unit);
if(unit<=200){
	charge=unit*0.50;
}
else if(200<unit<=400){
	charge=100+(unit*0.65);
}
else if(400<unit<=600){
	charge=230+(unit*0.80);
}
printf("Customer:%d\tPayment:Rs.%.2f\n",cusno,charge);
return 0;
}

