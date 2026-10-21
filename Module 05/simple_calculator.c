#include<stdio.h>
int main()
{
    long long int X,Y;
    scanf("%lld%lld",&X,&Y);
    long long int a,b,c;
    a=X+Y;
    b=X*Y;
    c=X-Y;
    printf("%lld + %lld = %lld\n",X,Y,a);
    printf("%lld * %lld = %lld\n",X,Y,b);
    printf("%lld - %lld = %lld\n",X,Y,c);
    return 0;
}