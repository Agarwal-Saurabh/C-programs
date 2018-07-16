#include<stdio.h>
#include<conio.h>
//#include<math.h>
int main()
{
int d,r;
float b,a;
printf("Enter the radius\n");
scanf("%d%d",&d,&r);
a=3.14*r*r,b=3.14*d*d;
if(a>b)
{
printf("%d is largest",a);
}
else
{
    printf("%d is largest",b);
}
getch();
//return 0;
}
