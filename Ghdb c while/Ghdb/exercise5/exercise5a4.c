#include<stdio.h>
int main(){
int n=5;
int s,i,j;
for(i = 1; i <= n; i++)
{
for(s = i; s < n; s++)
printf(" ");
for(j = 1; j <= i; j++)
printf("* ");
printf("\n");
}
return 0;
}
