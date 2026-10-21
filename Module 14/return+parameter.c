#include<stdio.h>
int double_it(int num)
{
    num+=num;
    return num;
}
int main()
{
    int x=10;
    int dbt=double_it(x);
    printf("%d",dbt);
    return 0;
}