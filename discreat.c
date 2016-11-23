
/*
Student Name:Prabin Adhikari
Subject:Programming Fundamental
Roll No:
Program:Computer Science in information technology
Lab sheet:2
Date:16 nov, 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x1=0,x2=0,a,b,c, dis=0;
    printf("Enter first number\n");
    scanf("%f", &a);
    printf("Enter second number\n");
    scanf("%f", &b);
    printf("Enter third number\n");
    scanf("%f", &c);

    dis=pow(b,2)-(4*a*c);

    x1=(-b+pow(dis,0.5))/(2*a);
    x2=(-b-pow(dis,0.5))/(2*a);
    printf("The equation x1 is: %f\n", x1);
    printf("The equation x2 is: %f\n", x2);



    getch();
    return(0);
}
