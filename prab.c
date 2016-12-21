#include<stdio.h>


int main()
{
	char c;
	int ASCII;
	printf("Enter a Character\n");
	scanf("%c",&c);
	ASCII=c;
	
	if ((ASCII>=65 && ASCII<=90)||(ASCII>=97 && ASCII<=122))
	{
		printf("The character is alphabet ");
	}
	else 
	{
		printf("The character is not alphabet");
	}
	return 0;
	
	
}
	
	
	
	
	
	

