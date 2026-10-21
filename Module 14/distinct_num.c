#include<stdio.h>
void dist_num(int a[],int n)
{
    
    int dis=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
             count++;
        }
        if(count==0)
        dis++;
    }
    printf("%d ",dis);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    dist_num(a,n);
    return 0;
}