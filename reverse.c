int main()
{
    int m,n,reverse=0;
    printf("enter");
    scanf("%d",&m);
    for(n=m;n!=0;n=n/10)
    {
                        reverse=reverse*10+n%10;
                        }
                        printf("%d",reverse);
                        getch();
                        }
