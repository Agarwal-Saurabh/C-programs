#include<stdio.h>
#include<conio.h>

int main()
{
      int a[10],i,element,found=0;
      printf("emter array\n");
      for(i=0;i<=10;i++)
      {
                        scanf("%d",&a[i]);
                        }
                        printf("enter the element to br searched\n");
                        scanf("%d",&element);
                        for(i=0;i<10;i++)
                        {
                                         if(element==a[i])
                                         {
                                                          printf("element is found at index =%d\n",i);
                                                          found=1;
                                                          break;
                                                          }}
                                                          if (found==0)
                                                          printf("element not found");
                                                          
                                                          getch();
                                                          }
