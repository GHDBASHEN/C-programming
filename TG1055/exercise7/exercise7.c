#include<stdio.h>
int main(){
char color;
printf("\tColor Menu\n");
printf("------------------------------\n");
printf("Orange\n");
printf("Brown\n");
printf("Yellow\n");
printf("Green\n\n");
printf("Enter the first letter of the cylinder color: ");
scanf("%c",&color);

switch(color)
{
case 'o':
	printf("\nCylinder content : Ammonia\n\n");
	break;
case 'b':
	printf("\nCylinder content : Carbon Monoxide\n\n");
	break;
case 'y':
	printf("\nCylinder content :Hydrogen\n\n");
	break;
case 'g':
	printf("\nCylinder content :Oxygen\n\n");
	break;
}
switch(color)
{
case 'O':
	printf("\nCylinder content : Ammonia\n\n");
	break;
case 'B':
	printf("\nCylinder content : Carbon Monoxide\n\n");
	break;
case 'Y':
	printf("\nCylinder content :Hydrogen\n\n");
	break;
case 'G':
	printf("\nCylinder content :Oxygen\n\n");
	break;
}
printf("Glad to have the service\n");
return 0;
}
