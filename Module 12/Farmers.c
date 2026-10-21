#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++) 
    {
        int M1,M2,D;
        scanf("%d %d %d",&M1,&M2,&D);
        int D2=(M1*D)/(M1+M2);
        printf("%d\n",D-D2);
    }       
    return 0;
}