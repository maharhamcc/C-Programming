#include<stdio.h>
int sum(int num1,int num2,int num3)
{
    int ans=num1+num2+num3;
    return ans;
}
int sub(int num1,int num2,int num3)
{
    int ans=num1-num2-num3;
    return ans;
}
int main()
{
    int s=sum(10,20,30);
    int s1=sub(20,30,40);
    int s2=sum(30,40,50);
    int s3=sub(40,50,60);
    printf("%d\n%d\n%d\n%d\n",s,s1,s2,s3);
    return 0;
}