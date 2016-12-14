#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b, temp;

    printf("Enter a Number");
    scanf("%d",&a);

      printf("Enter a Number");
      scanf("%d",&b);
      printf("Before swap %d\n",a);
      printf("Before swap %d\n",b);

      temp=a;
      a=b;
      b=temp;

      printf("After swap %d\n",a);
      printf("After swap %d\n",b);


       getch();
      return (0);
}
