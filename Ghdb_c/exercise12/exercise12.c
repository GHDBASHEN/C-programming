#include<stdio.h>
#include<math.h>
int main () {
int a,b,h,y;
printf("Insert Value for a:");
scanf("%d",&a);
printf("Insert Value for b:");
scanf("%d",&b);
y= pow(a,2)+pow(b,2);
h=sqrt(y);
printf("hypotenuse(h):%d\n",h);
return 0;
}

