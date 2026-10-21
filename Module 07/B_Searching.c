#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for (int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("%d ",i);
            count++;
            break;
        }
        
    
    }
    if(count==0)
    {
        printf("-1");
    }


    return 0;
}