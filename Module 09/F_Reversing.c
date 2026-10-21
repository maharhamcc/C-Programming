#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int tmp=ar[i];
        ar[i]=ar[j];
        ar[j]=tmp;
    }    
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}