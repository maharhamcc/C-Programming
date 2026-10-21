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
    int max=INT_MIN;
    int max_idx=0;
    int min=INT_MAX;
    int min_idx=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
            max_idx=i;
        }
    }    
    for(int i=0;i<n;i++)
    {    
        if(ar[i]<min)
        {
            min=ar[i];
            min_idx=i;
        }
    }
    ar[max_idx]=min;
    ar[min_idx]=max;

    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}