#include<stdio.h>
int main()
{
    // int n;
    // scanf("%d",&n);
    char arr[6];
    for(int i=0;i<6;i++)
    {
        scanf("%c",&arr[i]);
    }
    for(int i=0;i<6;i++)
    {
        printf("%c ",arr[i]);
    }

    return 0;
}