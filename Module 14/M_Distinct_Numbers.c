#include<stdio.h>
void dist_num()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int dist=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
             count++;
        }
        if(count==0)
        dist++;
    }
    printf("%d ",dist);
}
int main()
{
    dist_num();
    return 0;
}