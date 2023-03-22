#include<stdio.h>
int main()
{
int a=72;
char b='A';
float c=13.8;
float d=10.1234567;
int e=a/10;
printf("a equals:%d\n",a);
printf("char value of a:%c\n",a);
printf("integer value of b:%d\n",b);
printf("b equals:%c\n",b);
printf("c equals:%f\n",c);
printf("\nsizeof(a)=%lu bytes",sizeof(a));
printf("\nsizeof(b)=%lu bytes",sizeof(b));
printf("\nAddress of a=%p\n",&a);
printf("d variable store:%7.3f\n",d);
printf("the value of e=%d\n",e);
return 0;
}

