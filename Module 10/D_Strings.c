#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",&a,&b);
    int x=strlen(a);
    int y=strlen(b);
    printf("%d %d\n",x,y);
    printf("%s%s\n",a,b);
    for (int i=0;i<x;i++)
    {
         if(i==0)
         printf("%c",b[i]);
         else
         printf("%c",a[i]);
    }
    printf("\t");

    for (int i=0;i<y;i++)
    {
         if(i==0)
         printf("%c",a[i]);
         else
         printf("%c ",b[i]);
    }

    return 0;
}