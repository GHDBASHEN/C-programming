#include<stdio.h>
int main() {
    int num1, num2 = 0;

    printf("Input the number: ");
    scanf("%d", &num1);
    int y=num1;

while (num1 > 0){
        num2=num2 * 10 + num1 % 10;
        num1= num1 / 10;
}

    printf("Reverse order of %d: %d\n",y,num2);
    return 0;
}
