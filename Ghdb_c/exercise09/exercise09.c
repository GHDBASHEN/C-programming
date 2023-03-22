#include<stdio.h>
int main() {
int r;
const int PI=22/7;
printf("Insert Redius=");
scanf("%d",&r);
int D=2*r;
int C=2*PI*r;
int A=PI*r*r;
printf("Diameter =%d\n",D);
printf("Circumference =%d\n",C);
printf("Area =%d\n",A);
return 0;
}

