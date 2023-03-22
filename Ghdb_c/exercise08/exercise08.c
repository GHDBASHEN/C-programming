#include<stdio.h>
int main() {
int P;
int T;
int R;
int SI;
printf("insert Principle amount:");
scanf("%d",&P);
printf("insert Time:");
scanf("%d",&T);
printf("insert Rate:");
scanf("%d",&R);
SI=(P*T*R)/100;
printf("Simple interest:%d",SI);
return 0;
}
