int main()
{
    int y;
    printf("enter\n");
    scanf("%d",&y);
    y%400==0?printf("leap"):y%100==0?printf("not"):y%4==0?printf("leap"):printf("not");
    getch();
}
