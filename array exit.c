#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 100
main()
{
      int a[size],i,n;
      printf("enter no. of elements\n");
      scanf("%d",&n);
      if (n>size||n<=0)
      {
                       printf("invalid sixe");
                       getch();
                       exit(1);
                       }
                       printf("entr array\n");
                       for(i=0;i<n;i++)
                       {
                                       scanf("%d",&a[i]);
                                       }
                                       printf("the array elements\n");
                                       for(i=0;i<n;i++)
                                       {
                                                       printf("%d",a[i]);
                                                       }
                                                       getch();
                                                       }
                                                       
