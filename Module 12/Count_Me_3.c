#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++) 
    {
        char s[10001];
        scanf("%s",&s);
        int x=strlen(s);
        int c1=0,c2=0,c3=0;
        for(int j=0;j<x;j++)
        {
              int val=s[j];
            if(val>='A' && val<='Z')
            {
              c1++;
            }
            else if(val>='a' && val<='z')
            {
              c2++;
            }
            else if(val>='0' && val<='9')
            {
              c3++;
            }
        }
        printf("%d %d %d\n",c1,c2,c3);
    }       
    return 0;
}