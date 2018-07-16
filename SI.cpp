#include<stdio.h>
#include<conio.h>
int main()
{
    int P,T;
    float R,SI;
    printf("Enter P,R,T\n");
    scanf("%d%f%d",&P,&R,&T);
    SI=P*R*T/100;
    printf("SI=%f",SI);
    getch();
//    return 0;
}
