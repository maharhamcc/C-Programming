#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001];
    scanf("%s",&a);
    int x=strlen(a);
    int fre[26] ={0};
    for(int i=0;i<x;i++)
    {
        fre[a[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(fre[i]>0)
        printf("%c - %d\n",i+'a',fre[i]);
    }
    return 0;
}