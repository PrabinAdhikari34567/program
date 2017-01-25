#include<stdio.h>


int minimum ();
int main(){

int result;
result= minimum();

    printf("The minimum nuber is %d",result);
    return  0;
}
int minimum (){

int a,b;
 printf("Enter any number \n");
   scanf("%d",&a);

      printf("Enter any number \n");
   scanf("%d",&b);

   if (a<b)

    return (a);

   else
    return (b);



}
