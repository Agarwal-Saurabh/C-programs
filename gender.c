#include<stdio.h>
int main()
{
   int i; char choice;

do
{
  printf("enter gender\n");
    scanf("%c",&choice);
    fflush(stdin);
}
while(choice!='m'&&choice!='f');
getch();
}
