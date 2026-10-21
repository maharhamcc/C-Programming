#include<stdio.h>
int main()
{
    int N;
    int X;
    int a=0,b=0,c=0,d=0;
    scanf("%d\n",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&X);
    if(X%2==0)
    a++;
    else
    b++;
    if(X>0)
    c++;
    else if (X<0)
    d++;
    }
printf("Even: %d\n",a);
printf("Odd: %d\n",b);
printf("Positive: %d\n",c);
printf("Negative: %d\n",d);
 
    return 0;
}