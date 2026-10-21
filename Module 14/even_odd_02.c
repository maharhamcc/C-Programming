#include<stdio.h>
int even_odd()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    return 1;
    else
    return 2;
}
int main()
{
    int x=even_odd();
    if(x==1)
    printf("Even");
    else if(x==2)
    printf("Odd");
    return 0;
}