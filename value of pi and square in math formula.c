#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
int main()
{
   float r, circle,circumferance;
    printf("Enter radius\n");
    scanf("%f", &r);

    circle=pi*pow(r,2);
    circumferance=2*pi*r;

    printf("Area of circle is %f\n",circle );
    printf( "Area of circumferance is %f" ,circumferance);


    getch();
    return(0);

}








