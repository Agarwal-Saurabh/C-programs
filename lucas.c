#include<stdio.h>
#include<conio.h>
main()
{
int i,n;
int a=-1,b=1,c=0,d;
printf("enter\n\a");
scanf("%d",&n);
for(i=1;i<=n;i++)
{               
                  d=a+b+c;
                 printf("%d\t",d);

                 a=b;b=c;c=d;
                 }
                 getch();
                 }
