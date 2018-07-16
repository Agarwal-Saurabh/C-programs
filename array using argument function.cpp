#include<stdio.h>
#include<conio.h>
void input(int i,int n)
{
	int a[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void output(int i,int n)
{
	int a[n];
	printf("elements are\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
int main()
{
	int i,n;
	printf("enter no. of elements\n");
	scanf("%d",&n);
	input(i,n);
	output(i,n);
	getch();
	}
