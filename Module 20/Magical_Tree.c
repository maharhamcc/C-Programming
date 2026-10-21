#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int star=1;
    int lines=(N+1)/2+5;
    int tmp=lines;
    int space=tmp-1;
    for(int i=1;i<=lines;i++)
    {
        for(int j=space;j>0;j--)
        printf(" ");
        for(int j=1;j<=star;j++)
            printf("*");
        star+=2;
        space--;
        printf("\n");    
    }
    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        printf(" ");
        for(int j=1;j<=N;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}