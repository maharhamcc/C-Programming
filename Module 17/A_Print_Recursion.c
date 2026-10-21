#include<stdio.h>
void recur(int n,int i)
{
    if(i>n)
    return;
    printf("I love Recursion\n");
    recur(n,i+1);

}
int main()
{
     int n;
    scanf("%d",&n);
    recur(n,1);
    return 0;
}