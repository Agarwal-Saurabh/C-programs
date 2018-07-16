int main()
{
    int a[3][3],s=0,i,j;
    printf("enter the matrix\n");
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    {
                scanf("%d",&a[i][j]);
                }}
              for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    { if(i==j)
                {s=s+a[i][j];
                }}}
                printf("sum of diag. element %d",s);
                getch();
                }
