#include<stdio.h>
#include<conio.h>
void main()
{
float total=0,units,call;
printf("entr no. of units\n");
scanf("%f",&units);
if(units<0)
printf("invalid");
else if(units<100)
call=units*3,total=call-(30*call/100);
else
total=units*7.5+(19.5*units/100);
printf("total=%f",total);
getch();
}
