#include<stdio.h>
#include<conio.h>
void swap(int &x,int &y)
{
int t;
t=x;
x=y;
y=t;
return;
}
int main()
{
int a,b;
printf("Enter 2 numbers\n");
scanf("%d%d",&a,&b);
printf("values before swapping \n%d\n%d",a,b);
swap(&a,&b);
printf("\nvalues after swapping \n%d\n%d",a,b);
getch();
//return 0;
}
