#include<stdio.h>
void hello(int n,int i)
{
    if(i>n)
    return;
    hello(n,i+1);
    if(i<=n && i>1)
     printf("%d ",i);
     if(i==1)
     printf("%d",i);
}    
int main()
{
    int n;
    scanf("%d",&n);
    hello(n,1);
    return 0;
}
