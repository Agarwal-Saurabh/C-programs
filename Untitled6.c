#include<conio.h>
#include<stdio.h>

int main()
{
     float r,a;
     char choice;
     do
     {
          printf("enter radius\n");
          scanf("%f",&r);
          a=3.14*r*r;
          printf("area=%f\n",a);
         printf("continue  press y/Y \n");
          fflush(stdin);
         scanf("%c",&choice);
          }
          while(choice=='y'||choice=='Y');
          printf("exit\n");
  getch();
          }
