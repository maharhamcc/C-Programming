#include<stdio.h>
void sum(int num1,int num2,int num3)
{
    int ans=num1+num2+num3;
    printf("%d\n",ans);
}
int sub(int num1,int num2,int num3)
{
    int ans=num1-num2-num3;
    printf("%d",ans);
}
int main()
{
    sum(10,20,30);
    sub(20,30,40);
    printf("Hello");
    return 0;
}