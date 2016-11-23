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
    int x1,x2,a,b,c, dis;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("Enter third number\n");
    scanf("%d", &c);
    dis=pow(b,2)-4*(a*c);
a
    x1=pow(dis,0.5)/2*a;
    x2= - pow(dis,0.5)/2*a;
    printf("The equation x1 is; %f\n", x1);
    printf("The equation x2 is; %f\n", x2);



    getch();
    return(0);
}
