#include<stdio.h>
#include<math.h>
int powerfunc();
int squarert();
double exponent();
double logrithum();
double rnd();


int main(){
int ope;
int x;
double u;
char g;
do{
printf("\n----------------------\n");
printf("\nScientific Calculator\n");
printf("\n----------------------\n");
printf("1.\tPower\n");
printf("2.\tSquare Root\n");
printf("3.\tExponential\n");
printf("4.\tLog\n");
printf("5.\tRound\n\n");
printf("Enter the operation number:");
scanf("%d",&ope);

switch(ope){
	case 1:
	x=powerfunc();
	printf("The result is:%d",x);
	break;
	case 2:
	x=squarert();
	printf("The result is:%d",x);
	break;
	case 3:
	u=exponent();
	printf("The result is:%.2lf",u);
	break;
	case 4:
	u=logrithum();
	printf("The result is:%.2lf",u);
	break;
	case 5:
	u= rnd();
	printf("The result is:%.2lf",u);
	break;
}

printf("\n----------------------\n\n");
printf("Do you want to continue?(Y/N):");
scanf(" %c",&g);
}
while	((g=='Y') || (g=='Y'));
return 0;

}
int powerfunc(){
	int val;
	int expo;
	printf("Enter base:");
	scanf("%d",&val);
	printf("Enter Exponent:");
	scanf("%d",&expo);
	int z=pow(val,expo);
	return z;
}
int squarert(){
	int val;
	printf("Enter value:");
	scanf("%d",&val);
	int z=sqrt(val);
	return z;
}
double exponent(){
	double val;
	printf("Enter value:");
	scanf("%lf",&val);
	double z=exp(val);
	return z;
}
double logrithum(){
	double val;
	printf("Enter value:");
	scanf("%lf",&val);
	double z= log(val);
	return z;
}
double rnd(){
	double val;
	printf("Enter value:");
	scanf("%lf",&val);
	double z=round(val);
	return z;

}

