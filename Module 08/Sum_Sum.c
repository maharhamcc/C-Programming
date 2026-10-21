#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    long long int V[N];
    long long int sum1=0,sum2=0;
    for(int i=0;i<N;i++)
    {
        scanf("%lld",&V[i]);
    }
    for(int i=0;i<N;i++)
    {
        if(V[i]>0)
        {
            sum1=sum1+V[i];
        }
    }
    printf("%lld ",sum1);

    for(int i=0;i<N;i++)
    {
        if(V[i]<0)
        {
            sum2=sum2+V[i];
        }
    }
    printf("%lld ",sum2);

    return 0;
}