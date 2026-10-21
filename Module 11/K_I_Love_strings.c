#include<stdio.h>
int main()
{
    int t;
    scanf("%d ",&t);
    for (int k=1;k<=t;k++)
    {
        char s[51],t[51];
        scanf("%s %s",&s,&t);
        int x=strlen(s);
        int y=strlen(t);
        int i;
        for (i=0;i<x && i<y;i++)
        {
              printf("%c%c",s[i],t[i]);
        }
        if (i<x)
        {
            while(i<x)
            {
                printf("%c",s[i]);
                i++;
            }
        }
        else if (i<y)
        {
            while(i<y)
            {
                printf("%c",t[i]);
                i++;
            }
        }
    printf("\n");
    }
    return 0;
}