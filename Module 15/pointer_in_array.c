#include<stdio.h>
int main()
{
    int n[5]={10,20,30,40,50};

    printf("%p\n",n);
    printf("%d\n",*n);

    *n=100;
    *(n+2)=300;
    for(int i=0;i<5;i++)
    printf("%d ",n[i]);
    return 0;
}