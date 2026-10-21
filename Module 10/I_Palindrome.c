#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int count=0;
    int x=strlen(s);
    for(int i=0,j=x-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            printf("NO");
            count++;
            break;
        }
    }
    if(count==0)
    printf("YES");
    return 0;
}