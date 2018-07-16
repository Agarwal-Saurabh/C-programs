#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
     int a,b,c;
     float d,r1,r2;
     printf("enter value\n");
     scanf("%d%d%d",&a,&b,&c);
     d=(b*b)-(4*a*c);
     if(d<0)
     {
     printf("imaginary");
      }
      else
            {
            if(d==0)
                {
                   r1=r2=-b/(2*a);
                   printf("equal\n r1=%f,r2=%f",r1,r2);
                }
                else
                        {
                            r1=(-b+sqrt(d)/(2*a));
                            r2=(-b-sqrt(d)/(2*a));
                            printf("distinct\n r1=%f,r2=%f",r1,r2);
                        }
                  }
     getch();
     }
     
