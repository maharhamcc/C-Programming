#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int k=1;k<=t;k++)
    {
        int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=INT_MAX;
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            sum=ar[i]+ar[j]+j-i;
        if (sum<min)
        {
        min=sum;
        }
        }
    }
    printf("%d\n",min);
    }
    return 0;
}