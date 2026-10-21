#include<stdio.h>
void count(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            flag++;
            a[i]=a[i]/2;
        }
    }
count(a,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int flag=100,coun=0;
    count(a,n);
    return 0;
}