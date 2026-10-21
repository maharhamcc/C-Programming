#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        char s[101];
        scanf("%s",&s);
        int x=strlen(s);
        if(x>10)
        {
            for(int i=0;i<x;i++)
        {
            if(i==0)
            printf("%c",s[i]);
            else if(i==x-2)
            printf("%d",x-2);
            else if(i==x-1)
            printf("%c",s[i]);
        }
        }
        else
        {
            printf("%s",s);
        }
        printf("\n");
    }
    return 0;
}