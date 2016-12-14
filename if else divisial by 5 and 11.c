#include<stdio.h>
#include<conio.h>


int main()
{
    int n;
    printf("Enter a Number\n ");
    scanf("%d",&n);

    if(n%5==0)
    {
        printf("The number is Divisival by 5 =%d\n",n);
    }

    else if(n%11==0)
            {
                printf("The number is Divisival by 11 = %d\n",n);
                }

else{
    printf("Not found %d",n);
}

    getch();
    return(0);
}
