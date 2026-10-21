#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%10==0)
    {
        printf("YES");
    }
    else if((x/10)%(x%10)==0)
    {
        printf("YES");
    }
    else if ((x%10)%(x/10)==0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}