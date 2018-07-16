#include<stdio.h>
#include<conio.h>
//#include<math.h>
void main()
{
     float r,n,p;
     printf("Enter the number and raised to power\n");
     scanf("%f%f",&n,&p);
     r=pow(n,p);
     printf("result=%f",r);
     getch();
     }
