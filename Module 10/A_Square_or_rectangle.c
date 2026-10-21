#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        int w,h;
        scanf("%d %d",&w,&h);
        if(w==h)
        printf("Square\n");
        else
        printf("Rectangle\n");

    }
    return 0;
}