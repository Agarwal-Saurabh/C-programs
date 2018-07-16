#include<iostream>
#include<conio.h>
void interchange(int *num1,int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
int main()
{
	int num1=50,num2=70;
	interchange(&num1,&num2);
	printf("\n num1:%d",num1);
		printf("\n num2:%d",num2);
		return 0;
	}
