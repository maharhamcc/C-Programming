#include<stdio.h>
int even_odd(int num1)
{
    if(num1%2==0)
    return 1;
    else
    return 2;
}
int main()
{
    int a;
    scanf("%d",&a);
    int x=even_odd(a);
    if(x==1)
    printf("Even");
    else if(x==2)
    printf("Odd");
    return 0;
}