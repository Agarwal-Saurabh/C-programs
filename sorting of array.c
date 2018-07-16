#include<stdio.h>
#include<conio.h>
#define N 10
#include<stdlib.h>
int main()
{
      int a[N],i,T,j;
   Printf("Enter the array elements\n");
      for(i=0;i<N;i++)
      {
                      scanf("%d",&a[i]);
                      }
                      for(i=0;i<N-1;i++)
                      {
                                        for(j=i+1;j<N;j++)
                                        {
                                                          if(a[i]>a[j])
                                                          {
                                                                       T=a[i],a[i]=a[j],a[j]=a[i];
                                                                       }}}
                                                                       printf("array after sorting\n");
                                                                       for(i=0;i<N;i++)
                                                                       {
                                                                                       Printf("%d",a[i]);
                                                                       }
                                                                       
                                                                       getch();
                                                                       }
