#include<stdio.h>
int main()
{
    char str[30];
    fgets(str,29,stdin);
    printf("%s",str);
    return 0;
}