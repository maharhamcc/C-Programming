#include<stdio.h>
void fun(int a[])
{
     *a=100;
     *(a+1)=200;
     *(a+2)=300;
     *(a+3)=400;
     *(a+4)=500;
}
int main()
{
    int a[5]={10,20,30,40,50};
    fun(a);
    for (int i=0;i<5;i++)
    printf("%d ",a[i]);
    return 0;
}