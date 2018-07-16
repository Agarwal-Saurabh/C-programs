main()
{
      int a[3][5],i,j;
      printf("enter the matrix\n");
      for(i=0;i<3;i++)
      {
                      for(j=0;j<5;j++)
                      {
                                      scanf("%d",&a[i][j]);
                                      }
                                      }
                                      printf("the matrix is\n");
                                      for(i=0;i<3;i++)
                                      {
                                                      for(j=0;j<5;j++)
                                                      {
                                                                      printf("%d",a[i][j]);
                                                                      }
                                                                      printf("\n");
                                                                      }
                                                                      printf("\n\ntranspose of matrix is\n");
                                                                      for(i=0;i<5;i++)
                                                                      {
                                                                                      for(j=0;j<3;j++)
                                                                                      {
                                                                                                      printf("%d",a[j][i]);
                                                                                                      }
                                                                                                      printf("\n");
                                                                                                      }
                                                                                                      getch();
                                                                                                      }
