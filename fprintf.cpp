#include<stdio.h>
#include<conio.h>
struct pro
{
	char name[15];
	int price;
	int quan;
};
int main()
{

pro t;
FILE *fp;
char ch;
int i;
fp=fopen("item.txt","w");
for (i=0;i<5;i++)
{
printf("enter item detail\n");
scanf("%s%d%d",t.name,&t.price,&t.quan);
fprintf(fp,"%s\t",t.name);
fprintf(fp,"%d\t",t.price);
fprintf(fp,"%d\t",t.quan);
}
fclose(fp);
getch();
}
