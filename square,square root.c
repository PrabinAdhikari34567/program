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
    float a, square,sr;
    printf("Enter Number\n");
    scanf("%f",&a);

    square=pow(a,2);
    sr=pow(a,0.5);
    sr=sqrt(a);

    printf("Square of;%f\n", square);
    printf("Square root is %f", sr);




    getch();
    return(0);




}
