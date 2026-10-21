#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int count=0;
    for (int i=0,j=n-1;i<=j;i++,j--)
    {
    if(ar[i]==ar[j])
    {
        count++;
    }   
    }
    if(n%2!=0)
    {
        if(count==(n+1)/2)
        printf("YES");
        else
        printf("NO");
    }
    else
    {
        if(count==n/2)
        printf("YES");
        else
        printf("NO");
    }
    return 0;
}