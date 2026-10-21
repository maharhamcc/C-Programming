#include<stdio.h>
int main()
{
    int a,b,c;
    char s,q;
    scanf("%d %c %d %c %d",&a,&s,&b,&q,&c);
    if(s=='+')
    {
        int sum=a+b;
        if(c==sum)
        printf("Yes");
        else
        printf("%d",sum);
    }
    else if(s=='-')
    {
        int sub=a-b;
        if(c==sub)
        printf("Yes");
        else
        printf("%d",sub);
    }
    else if(s=='*')
    {
        int mul=a*b;
        if(c==mul)
        printf("Yes");
        else
        printf("%d",mul);
    }
    return 0;
}