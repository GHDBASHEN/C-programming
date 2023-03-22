#include<stdio.h>
int main() {
float PI =22/7.0;
float radius,volume;
printf("Enter radius value\n");
scanf("%f",&radius);
volume=4/3 * PI * radius * radius;
printf("Volume is=%.8f",volume);
return 0;
}
