#include<stdio.h>
void fun(char a[])
{
     *a='a';
     *(a+1)='p';
     *(a+2)='p';
     *(a+3)='l';
     *(a+4)='e';
}
int main()
{
    char a[101];
    scanf("%s",a);
    fun(a);
    printf("%s",a);
    return 0;
}