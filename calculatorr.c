#include<stdio.h>
#include<conio.h>
  int main()

{
    int n,a,b, add,sub,mul,div,mod;
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
        add=a+b;
        printf("sum= %d",add);
        break;
        case 2:
        printf("Enter a Number\n ");
        scanf("%d",&a);
         printf("Enter a Number\n ");
        scanf("%d",&b);
        sub=a-b;
        printf("subtraction= %d",sub);
        break;
        case 3:
        printf("Enter a Number\n ");
        scanf("%d",&a);
         printf("Enter a Number\n ");
        scanf("%d",&b);
        mul=a*b;
        printf("mul= %d",mul);
        break;
        case 4:
        printf("Enter a Number\n ");
        scanf("%d",&a);
         printf("Enter a Number\n ");
        scanf("%d",&b);
        div=a/b;
        printf("Divide= %d",div);
        break;

       default:
           printf("thank you");


    }


  getch();
  return(0);
}

