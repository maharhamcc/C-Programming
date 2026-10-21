#include<stdio.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int x=strlen(a);
    int y=strlen(b);
    for(int i=0;i<=y;i++)
    {
       a[i+x]=b[i];
    }
    printf("%s %s",a,b);
    return 0;
}