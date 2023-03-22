#include <stdio.h>  
int main()  {  
    int a,b;
    a=5;
    b=a;
   for(int i=1;i<=a;i++)  
   {  
       for(int j=1;j<=b-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       b--;  
     
      printf("\n");  
    }  
return 0;  
}  
