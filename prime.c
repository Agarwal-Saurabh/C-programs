#include<conio.h>
#include<stdio.h>
int main()
{
    int i,n,found;
   // float s=0;
    printf("entr\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
                  if(n%i==0)
                   {
                            found=0;
                            break;
                            }
                            }
                            if(found==1)
                            printf("prime");
                            else
                            printf("not");
                            getch();
                            }
