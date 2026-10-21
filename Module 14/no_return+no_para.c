#include<stdio.h>
void sum()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ans=a+b+c;
    printf("%d\n",ans);
}
int sub()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ans=a+b+c;
    printf("%d",ans);
}
int main()
{
    sum();
    sub();
    return 0;
}