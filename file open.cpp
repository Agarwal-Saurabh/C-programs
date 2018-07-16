#include<conio.h>
#include<stdio.h>
int main()
{
	FILE*f1;
	f1=fopen("e:\\record1.txt","w");
if(f1==NULL)
{
printf("file opening error");
}

getch();

}
