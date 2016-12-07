#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float n ;
    printf("Enter your Percentage\n");
    scanf("%f",&n);

    if (n>=79 && n<(100) )
    {
        printf("CONGRATULATION YOU HAVE PASSED WITH distinction %f\n",n);
    }

    if (n>=59 && n<(80))
    {

        printf("CONGRATULATION YOU HAVE PASSED WITH first division %f\n",n);
    }

    if (n>=49 && n<(60) )
    {
        printf("CONGRATULATION YOU HAVE PASSED WITH SECOND DIVISION %f\n",n);
    }
    if (n>=39 && n<(49))
        {
        printf("CONGRATULATION YOU HAVE PASSED WITH THIRD DIVISION %f\n",n);
    }




      getch()  ;
      return(0);


}

