#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
FILE *f1,*f2,*f3;
int i,n,num;
f1=fopen("e:\\new\\number.txt","w");
f2=fopen("e:\\new\\odd.txt","w");
f3=fopen("e:\\new\\even.txt","w");
if(f1==NULL||f2==NULL||f3==NULL)
{
  printf("File opening error");
  getch();
  exit(1);          
}
printf("Enter the total number to be copied\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  printf("Enter the number\n");
  scanf("%d",&num);
  fprintf(f1,"%d\n",num);               
}
fclose(f1);
f1=fopen("e:\\new\\number.txt","r");
while(1)
{
  fscanf(f1,"%d",&num);
  if(feof(f1)!=0)
  break;
  if(num%2==0)
  fprintf(f3,"%d\n",num);               
  else
  fprintf(f2,"%d\n",num);                     
}
fclose(f1);
fclose(f2);
fclose(f3);
getch();  
} 
