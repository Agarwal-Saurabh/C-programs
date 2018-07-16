int main()
{
    int i,j,s,n;
    printf("enter\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
                     for(s=i;s<=n-1;s++)
                     {
                                       printf(" ");
                                       }
                                       for(j=1;j<=2*i-1;j++)
                                       {
                                                            printf("%c",j+64);
                                                            }
                                       
                                                            printf("\n");
                                        }                    getch();}
