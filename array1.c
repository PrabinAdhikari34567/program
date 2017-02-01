#include<stdio.h>


int main ()

{
 int num[10],i;

 for(i=0; i<10; i++)
 {
     printf("Enter a number \n");
     scanf("%d",&num[i]);

 }
 for(i=0; i<10; i++)

 {
     printf("num[%d] contails %d data \n", i,num[i]);

 }
return 0;
}
