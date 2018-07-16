#include<stdio.h>
#include<conio.h>
struct student{
	
	char name[15];
	int roll;
};
int main()
{
	struct student anil =
	 {
		"anil",
		"1534"
	  };
	printf("%s %d",anil.name,anil.roll);
getch();
}

