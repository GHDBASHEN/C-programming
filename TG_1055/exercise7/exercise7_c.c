#include<stdio.h>
int main ()
{
const int centimeter_per_meter=100;
const int meter_per_kilometer=1000;
float x;
float y;
float z;
 
printf("insert value in meter:");
scanf("%f",&x);
y=x*centimeter_per_meter;
z=x/meter_per_kilometer;
printf("meter=%fcm",y,"\n");
printf("\nmeter=%fkm",z,"\n");
return 0;
}

