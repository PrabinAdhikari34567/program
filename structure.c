#include<stdio.h>
struct student
{
    int id;
    int registrarion_number;
    float fee;
};
int main()
{
    struct student mikma;
    mikma.id=100;
    mikma.registrarion_number=10050;
    mikma.fee=555.55;
    printf("Mikma id= %d\nMikma registration.no=%d\nMikma fee=%f",mikma.id,mikma.registrarion_number,mikma.fee);
    return 0;
}
