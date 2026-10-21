#include<stdio.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int  x=strcmp(a,b);
        if(x==0)
        {
        printf("Equal");
        }
        else if(x<0)
        {
        printf("a is smaller");
        }
        else if(x>0)
        {
        printf("b is smaller");
        }
    
    return 0;
}