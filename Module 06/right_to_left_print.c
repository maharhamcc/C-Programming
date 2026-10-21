#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    while(X!=0)
    {
        printf("%d ",X%10);
        X/=10; 
    }   
    return 0;
}