#include<stdio.h>
int main()
{
	char var1;
	int var2;
	float var3;
	double var4;
	double sum;
	
	printf("insert value for var char 1:");
	scanf("%c",&var1);
	printf("insert value for var int 2:");
	scanf("%d",&var2);
	printf("insert value for var float 3:");
	scanf("%f",&var3);
	printf("insert value for var double 4:");
	scanf("%lf",&var4);
	sum=var2+var3;
	printf("Value of var 1:\t%c\nValue of var 2:\t%d\nValue of var 3:\t%f\nValue of var 4:\t%lf\nSum of floats\t%lf",var1,var2,var3,var4,sum);
return 0;
}


