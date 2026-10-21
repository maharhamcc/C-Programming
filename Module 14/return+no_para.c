#include<stdio.h>
int sum()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ans=a+b+c;
    return ans;
}
int sub()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ans=a-b-c;
    return ans;
}
int main()
{
    int s=sum();
    int s1=sub();
    printf("%d\n%d",s,s1);
    return 0;
}