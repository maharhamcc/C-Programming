#include<stdio.h>
char char_to_ascii(char c)
{
    char n=c-32;
    return n;
}
int main()
{
    char c;
    scanf("%c",&c);
    char x=char_to_ascii(c);
    printf("%c",x);
    return 0;
}