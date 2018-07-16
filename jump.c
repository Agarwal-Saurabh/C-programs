#include<stdio.h>
#include<conio.h>
int main()
{   
     int i;
    float a,b;
    for(i=1;i<=5;i++)
    {
        printf("enter no\n");
       scanf("%f%f",&a,&b);
    if(b==0)
        {
                break;
                }
                printf("result=%f\n",a/b);
                }
                getch();
                }
