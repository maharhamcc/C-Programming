#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    int len=strlen(s);
    int count=0;
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
            count++;
    }
    if(count==0)
    return 1;
    else
    return 0;
}
int main()
{
    char s[1001];
    scanf("%s",s);
    int x=is_palindrome(s);
    if(x==1)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}