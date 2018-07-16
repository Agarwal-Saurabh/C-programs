#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float r;
float2 n,p;
printf("Enter number and raised to the power\n");
scanf("%f%f",&n,&p);
r=pow(n,p);
printf("result=%f",r);
getch();
//return 0;
}
