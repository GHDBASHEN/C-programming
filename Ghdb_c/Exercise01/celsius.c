#include<stdio.h>
int main() {
float f;
float c;
printf("Input celsius value:");
scanf("%f",&c);
f=c*9/5+32;
printf("Fahrenheit value :%.2f\n",f);
return 0;
}
