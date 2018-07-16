#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
main()
{
      int i,max,pos,a[10];
    
                       printf("entr array\n");
                       for(i=0;i<10;i++)
                       {
                                       scanf("%d",&a[i]);
                                       }
                                      max=a[0],pos=0;
                                      for(i=1;i<10;i++)
{                                      if(max<a[i])
{
                                      max=a[i],pos=i;}
                                      }
                                      printf("max=%d index=%d",max,pos);                                                       getch();
                                                       }
                                                       
