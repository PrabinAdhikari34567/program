#include<stdio.h>
struct addition
{
    int num1;
    int num2 ;
};
int main()
{
    int result ;
  struct addition add;
  printf("Enter any number \n");
  scanf("%d",&add.num1);
    printf("Enter any number \n");
  scanf("%d",&add.num2);
  result=add.num1+add.num2;
  printf("The sum of two num is %d",result);
  return 0;



}


