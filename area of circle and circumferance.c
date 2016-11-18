#include<stdio.h>
#include<conio.h>

int main()
{
   float r, circle,circumferance;
    printf("Enter radius\n");
    scanf("%f", &r);

    circle=3.14*r*r;
    circumferance=2*3.14*r;

    printf("Area of circle is %f\n",circle );
    printf( "Area of circumferance is %f" ,circumferance);


    getch();
    return(0);

}








