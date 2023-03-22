#include<stdio.h>
#define PI 3.14
double Diameter();
double Circumference();
double Area();
int main(){
	double radius;
	printf("Insert Radius:");
	scanf("%lf",&radius);
	printf("Diameter=%.2lf\n",Diameter(radius));
	printf("Circumference=%.2lf\n",Circumference(radius));
	printf("Area=%.2lf\n",Area(radius));
	return 0;
}
 
 double Diameter(double radius){
 	double diameter=2 * radius;
 	return diameter;
 }
 double Circumference(double radius){
 	double circumference=2 * PI* radius;
 	return circumference;
 }
 
 double Area(double radius){
 	double area=PI * radius * radius;
 	return area;
 }
 
