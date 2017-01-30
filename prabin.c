#include<stdio.h>

int add (int a ,int b);
int sub (int a ,int b);
int mul (int a ,int b);
int div (int a ,int b);
  int main()

{
    int n,a,b;
    printf("\t Simple calcudator  \n");
    printf("Choose menu from down \n ");
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.divide\n");

    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("Enter a Number\n ");
        scanf("%d",&a);
         printf("Enter a Number\n ");
        scanf("%d",&b);
        int result = add(a, b);
       printf("sum= %d",result);
        break;
    case 2:
        printf("Enter a Number\n ");
        scanf("%d",&a);
         printf("Enter a Number\n ");
        scanf("%d",&b);
        int result1 = sub(a, b);
        printf("subtraction= %d",result1);
        break;
    case 3:
        printf("Enter a Number\n ");
        scanf("%d",&a);
         printf("Enter a Number\n ");
        scanf("%d",&b);
        int result2 = mul(a, b);
        printf("mul= %d",result2);
        break;
        case 4:
        printf("Enter a Number\n ");
        scanf("%d",&a);
         printf("Enter a Number\n ");
        scanf("%d",&b);
       int result3 = div(a, b);
        printf("Divide= %d",result3);
        break;

       default:
           printf("thank you");


    }
int sum(int a, int b)
{
    int add;
  add=a+b;
  return 0;


}

int sub(int a, int b)
{
    int sub;
  sub=a-b;
  return 0;


}
int mul(int a, int b)
{
    int mul;
  mul=a*b;
  return 0;


}
int div(int a, int b)
{
    int div;
  div=a/b;
  return 0;


}

}
