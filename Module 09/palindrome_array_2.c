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
    for (int i=0,j=n-1;i<j;i++,j--)
    {
    if(ar[i]!=ar[j])
    {
        printf("NO");
        count++;
        break;
    }   
    }
    if(count==0)
    {
     printf("YES");
    }
    return 0;
}