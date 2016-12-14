#include<stdio.h>
#include<conio.h>


int main()
{
    int n;
    printf("Enter a Number\n ");
    scanf("%d",&n);

    if(n%5==0&&n%11==0)
    {
        printf("The number is Divisival by 5 and 11 =%d\n",n);
    }



    getch();
    return(0);
}
