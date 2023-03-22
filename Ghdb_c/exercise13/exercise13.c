#include<stdio.h>
#include<math.h>
int main() {
const float PI=22/7;
double a,b,c,length,x,radians;
printf("Insert a:");
scanf("%lf",&a);
printf("Insert b:");
scanf("%lf",&b);
printf("Insert angle of c:");
scanf("%lf",&c);
radians=(c/180)*PI;
x=pow(a,2)+pow(b,2)-2*a*b*cos(radians);
length=sqrt(x);
printf("Length of Triangle:%.2lf\n",length);
return 0;
}
