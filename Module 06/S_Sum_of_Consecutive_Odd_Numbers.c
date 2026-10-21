#include<stdio.h>
int main()
{
    int n,x,y,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        int sum=0;
        if(x>y)
        {
            for(int j=y+1;j<x;j++)
            {
                if(j%2!=0)
                sum=sum+j;
             }
            
        }

        else if(x<y)
        {
            for (int k=x+1;k<y;k++)
            {
                if(k%2!=0)
                sum=sum+k;
            }
            
        }
        printf("%d\n",sum);
    }
    return 0;
}