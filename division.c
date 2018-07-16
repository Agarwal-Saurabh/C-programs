#include<stdio.h>
#include<conio.h>
//#include<math.h>
int main
{
     int n,d,q,r;
     printf("enter the numerator and denominator\n");
     scanf("%d%d",&n,&d);
     q=n/d,r=n-q*d;
     printf("remainder=%d",r);
     getch();
     }
