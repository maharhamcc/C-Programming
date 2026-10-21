#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",&s);
    int x=strlen(s);
    int fre[26]={0};
    for (int i=0;i<x;i++)
    {
        fre[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if (fre[i]>0)
        {
        printf("%c : %d\n",i+'a',fre[i]);
        }
    }
    
    return 0;
}