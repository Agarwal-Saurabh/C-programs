#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    int a=-1,b=1,c;
    printf("enter n\n");
    scanf("%d",&n);
    
    i=1;
    while(i<=n)
    {
               c=a+b;
               printf("%d\t",c);
               
    a=b;
    b=c;
    i++;
}
getch();
}
