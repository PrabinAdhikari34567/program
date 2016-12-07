/*
Student Name:Prabin Adhikari
Subject:Programming Fundamental
Roll No:
Program:bcs
Lab sheet:10
Date: 7 cde, 2016
*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c ;
    printf("enter the first number \n");
    scanf("%d", &a);

     printf("enter the second number\n ");
    scanf("%d", &b);


     printf("enter the third number\n ");
    scanf("%d", &c);


    if (a>b && a>c)
    {
    printf("The greater number is %d",a);

    }


      else if  (b>a && b>c)
    {
    printf("The greater number is %d",b);

    }

    else
    {
    printf("The greater number is %d",c);

    }


   getch() ;
   return(0);
}
