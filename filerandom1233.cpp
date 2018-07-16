#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
FILE *f1;
int pos;
char ch;
f1=fopen("e:\\new\\alpha.txt","r");
if(f1==NULL)
{
  printf("File opening error");
  getch();
  exit(1);          
}
pos=ftell(f1);
printf("Current position=%d\n",pos);
fseek(f1,5,0);
ch=fgetc(f1);
printf("%c\n",ch);
pos=ftell(f1);
printf("Current position=%d\n",pos);
fseek(f1,0,2);
pos=ftell(f1);
printf("Current position=%d\n",pos);
fclose(f1);
getch();  

} 
