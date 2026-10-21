#include<stdio.h>
int char_to_ascii(char c)
{
    int n=c;
    return n;
}
int main()
{
    char c;
    scanf("%c",&c);
    int x=char_to_ascii(c);
    printf("%d",x);
    return 0;
}