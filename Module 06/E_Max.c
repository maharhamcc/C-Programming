#include<stdio.h>
int main()
{
    int N,X;
    scanf("%d\n",&N);
    int max=0;
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&X);
        if (X>max)
        max=X;
        else
        max=max;
    }
    printf("%d",max);
    return 0;
}