#include<stdio.h>
#include<math.h>

int main()
{
    int a,b, sum,mul,subt,div,mod;
    printf("Print Number A \n");
    scanf("%d",&a);
    printf("Print Second number\n");
    scanf("%d",&b);

         sum=a+b;
         mul=a*b;
         subt=a-b;
         div=a/b;
         mod=a%b;

    printf("The sum of two numbers :%d\n" ,sum);
    printf("The multiply of two numbers :%d\n" ,mul);
    printf("The subtraction of two numbers :%d\n" ,subt);
    printf("The Division of two numbers :%d\n" ,div);
    printf("The mod of two numbers :%d\n" ,mod);

    getch();
    return (0);


}
