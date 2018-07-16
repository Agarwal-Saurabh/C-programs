#include<stdio.h>
#include<conio.h>
#define N 10
int main()
{
       int a[N],i,k,t;
      printf("enter the array\n");
      for(i=0;i<N;i++)
      {
                      scanf("%d",&a[i]);
                      }
                      k=N-1;
                      for(i=0;i<N/2;i++)
                      {
                                        t=a[i];
                                        a[i]=a[k];
                                        a[k]=t;
                                        k--;
                                        }
                                        printf("reverse of array\n");
                                        for(i=0;i<N;i++)
                                        {
                                                        printf("%d",a[i]);
                                                        }
                                                        getch();
                                                        }
