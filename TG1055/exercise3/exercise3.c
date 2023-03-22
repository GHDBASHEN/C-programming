#include<stdio.h>
int main() {
char ch;
printf("Enter any character:");
scanf("%c",&ch);
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
	printf("%c is a LETTER\n",ch);
}
else{
	printf("%c is not a LETTER\n",ch);
}
if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
	printf("%c is a VOWEL\n",ch);
}
else{
	printf("%c is not a VOWEL\n",ch);
}
}
