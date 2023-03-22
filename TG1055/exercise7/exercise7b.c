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

if((color=='o')||(color=='O'))
{
	printf("\nCylinder content : Ammonia\n\n");
}
if((color=='b')||(color=='B'))
{
	printf("\nCylinder content : Carbon Monoxide\n\n");
}
if((color=='y')||(color=='Y'))
{
	printf("\nCylinder content :Hydrogen\n\n");
}
if((color=='g')||(color=='G'))
{
	printf("\nCylinder content :Oxygen\n\n");
}
printf("Glad to have the service\n");
return 0;
}
