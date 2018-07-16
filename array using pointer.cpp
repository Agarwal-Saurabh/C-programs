#include<conio.h>
#include<stdio.h>
#define S 5
int main()
{
	int a[S];
	int *p[S];
	int i;
	for(i=0;i<S;i++)
	p[i]=&a[i];
	for(i=0;i<S;i++)
	{printf("\n Enter a[%d] elements\n",i);
	scanf("%d",p[i]);
	}
printf("array elements are\n");
for(i=0;i<S;i++)
printf("a[%d]=%d\n",i,*p[i]);
getch();

}
