#include<stdio.h>

int main()
{
int ASCII;
char a;

printf("Enter any Character ");
scanf("%c",&a);

ASCII=a;
(ASCII>=65 && ASCII<=90|| ASCII>=97 && ASCII<=122)?printf("The character is alphabet"): printf("The character is not alphabet");

return 0;
}
