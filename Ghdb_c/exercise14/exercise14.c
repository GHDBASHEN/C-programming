#include<stdio.h>
#include<math.h>
int main(){
float p,t,r,ci,x;
printf("Insert Amount:");
scanf("%f",&p);
printf("Insert Time:");
scanf("%f",&t);
printf("Insert Rate:");
scanf("%f",&r);
x=pow((1+r/100),t);
ci=p*x-p;
printf("Compound Interest=%f\n",ci);
return 0;
}
