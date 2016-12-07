#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()

 {
     int n;
     printf("Enter number\n");
     scanf("%d",&n);

     (n%2==0)? printf("the number is even %d",n) : printf("The number is odd %d",n);
     getch();
     return(0);

 }
