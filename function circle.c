#include<stdio.h>

void area(int a);

int main(){
    int a;

    printf("Enter a radius\n");
    scanf("%d",&a);
    area(a);

    return 0;
}
void area(int a)
{
    int pie =3.14;
    a=pie*a*a;
    printf("result = %d",a);

}
