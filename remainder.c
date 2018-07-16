#include<stdio.h>
#include<conio.h>
int main()
{
int n,d,q,r;
printf("Enter numerator and denominator\n");
scanf("%d%d",&n,&d);
q=n/d,r=n-q*d;
printf("remainder=%d",r);
getch();
//return 0;
}
