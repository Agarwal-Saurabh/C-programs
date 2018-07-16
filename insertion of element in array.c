#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
main()
{
      int a[size]={10,30,40,50,60},i,n=5,pos,element;
      printf("enter no. of pos\n");
      scanf("%d",&pos);
      if (pos>size||pos<=0)
      {
                       printf("invalid sixe");
                       getch();
                       exit(1);
                       }
                       printf("entr element\n");
                       
                       scanf("%d",&element);
                       for(i=n-1;i>=pos;i--)
                       {
                       a[i+1]=a[i];
                                       }
                                       a[pos]=element;
                                       n++;
                                       
                                       for(i=0;i<n;i++)
                                       {
                                                       printf("%d",a[i]);
                                                       }
                                                       getch();
                                                       }
                                                       
