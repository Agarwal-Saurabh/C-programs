int main()
{
      int a[3][3],b[3][3],c[3][3]={0},i,j,k;
      printf("enter the matrix\n");
      for(i=0;i<3;i++)
      {
                      for(j=0;j<5;j++)
                      {
                                      scanf("%d",&a[i][j]);
                                      }
                                      }
                                      printf("enter 2 matrix\n");
                                        for(i=0;i<3;i++)
      {
                      for(j=0;j<5;j++)
                      {
                                      scanf("%d",&b[i][j]);
                                      }
                                      }
                                   printf("sum of matrices\n");
                                   for(i=0;i<3;i++)
                                   {
                                                   for(j=0;j<3;j++)
                                                   {
                                                                     for(k=0;k<2;k++)
                                                                     {
                                                                   c[i][j]+=a[i][k]*b[k][j];
                                                                   }
                                                                   printf("%d",c[i][j]);
                                                                   }
                                                                   printf("\n");
                                                                   }
                                                                   getch();
                                                                   }
      
                     
                                     
