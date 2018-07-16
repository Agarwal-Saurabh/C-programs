#define N 10
int main()
{
    int a[N],i,T,j,pick;
    printf("enter the array elements\n");
    for(i=0;i<N;i++)
    {
                    scanf("%d",&a[i]);
                    }
                    for(i=1;i<=N-1;i++)
                    {
                                      pick=a[i];
                                      for(j=i-1;j>=0&&pick<a[j];j--)
                                     {
                                      a[j+1]=a[j];
                                      
                                      }
                                      a[j+1]=pick;
                                      }
                                      printf("array after inserting sorting\n");
                                      for(i=0;i<N;i++)
                                      printf("%d ",a[i]);
                                      getch();
                                      }
