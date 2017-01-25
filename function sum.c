#include<stdio.h>
#include<conio.h>
void sum();
int main(){

sum();
getch();
return(0);


}


void sum() {
   int a,b,sum;

   printf("Enter any number \n");
   scanf("%d",&a);

      printf("Enter any number \n");
   scanf("%d",&b);

   sum=a+b;

   printf("sum of two number is %d",sum);


}

