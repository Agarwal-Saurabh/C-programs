int main()
{
      int a[10],i,element,found=0;
      int LB,UB,MID;
      printf("enter the array\n");
      for(i=0;i<10;i++)
      {
                       scanf("%d",&a[i]);
                       }
                       printf("enter the element to be searched\n");
                       scanf("%d",&element);
                       LB=0,UB=9;
                       while(LB<=UB)
                       {
                                    MID=(LB+UB)/2;
                                    if(element==a[MID])
                                    {
                                                       printf("element is found");
                                                       found=1;
                                                       break;
                                                       }
                                                       else if (element>a[MID])
                                                       LB=MID+1;
                                                       else
                                                       UB=MID-1;
                                                       }
                                                       if (found==0)
                                                       printf("elements not found");
                                                       getch();
                                                       }
