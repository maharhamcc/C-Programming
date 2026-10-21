#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long int m;
        int a,b,c;
        scanf("%lld %d %d %d",&m,&a,&b,&c);
        long long int x=m/(a*b*c);
        if(x*a*b*c==m)
        printf("%lld\n",x);
        else
        printf("-1\n");
        
    }
    return 0;
}