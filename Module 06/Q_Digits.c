#include<stdio.h>
int main()
{
    int N,X;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%d\n",&X);
        if (X==0)
        printf("%d",X);
        while(X!=0)
        {
            printf("%d ",X%10);
            X/=10;
        }
        printf("\n");
    }
    return 0;
}