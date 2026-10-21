#include<stdio.h>
int main()
{
    int n[5]={10,20,30,40,50};
    printf("%p\n",&n[0]);
    printf("%p\n",&n[1]);
    printf("%p\n",&n[2]);
    printf("%p\n",&n[3]);
    printf("%p\n",&n[4]);
    // proti ta element er address 4 ghor( 4 byte) por por

    printf("%p\n",n);
    printf("%d\n",*n);

    *n=100;
    for(int i=0;i<5;i++)
    printf("%d ",n[i]);
    return 0;
}