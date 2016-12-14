#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;

    printf("Enter a Number\n");
    scanf("%d",&a);
    printf("Enter a Number\n");
    scanf("%d",&b);

     printf("Before swap %d\n",a);
      printf("Before swap %d\n",b);

      a=a-b;
      b=a+b;
      a=b-a;

       printf("After swap %d\n",a);
      printf("After swap %d\n",b);

      getch();
      return(0);

}
