#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,reverse=0;
   for(m=1;m<=100;m++)
   {
    for(n=m;n!=0;n=n/10)
    {
                        reverse=reverse*10+n%10;
                        }
                        if(m==reverse)
                        
                                      printf("%d",m);
                                      }   
                        getch();
                        }
