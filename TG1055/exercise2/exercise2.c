#include<stdio.h>
int main() {
int a;
int b;
int c;

printf("Insert first number:");
scanf("%d",&a);
printf("Insert second number:");
scanf("%d",&b);
printf("Insert Third number:");
scanf("%d",&c);
if (a>b){
    if (a>c){	
    	printf("Max is First=%d",a);}}
    else if(b>c) {
	printf("Max is Second=%d",b);}
	else{
	printf("Max is Third=%d",c);}
return 0;
}
