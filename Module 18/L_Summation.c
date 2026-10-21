#include<stdio.h>
void arr(int a[],int n,int i,int sum)
{
    if(i==n)
    return;
    sum=sum+a[i];
    if(i==n-1)
    printf("%d",sum);
    arr(a,n,i+1,sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int sum=0;
    arr(a,n,0,sum);
    return 0;
}