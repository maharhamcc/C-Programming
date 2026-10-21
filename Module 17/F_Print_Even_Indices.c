#include<stdio.h>

void print_array(int a[],int n,int i)
{
    if(i==-1)
    return;
    if(i%2==0)
        printf("%d ",a[i]);
    print_array(a,n,i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    print_array(a,n,n-1);
    return 0;
}