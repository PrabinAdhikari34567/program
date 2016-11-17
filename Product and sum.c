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

int main()
{
    float a,b,c, sum,product;
    printf("Enter First Number \n");
    scanf("%f", &a);
    printf("Enter Second Number \n");
    scanf("%f", &b);
    printf("Enter Third Number \n");
    scanf("%f", &c);
    sum=a+b+c;
    product=a*b*c;
    printf("The sum of %f \n", sum);
    printf("The Product Of %f \n", product);
    getch();
    return(0);


}
