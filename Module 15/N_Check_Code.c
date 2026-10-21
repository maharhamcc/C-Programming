#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char c[a+b+2];
    scanf("%s",c);
    bool check=true;
    for(int i=0;i<a+b+1;i++)
    {
        if(i==a)
        {
            if(c[i]!='-')
            check=false;
        }
        else
        {
            if(c[i]<'0' || c[i]> '9')
            check=false;
        }
   
    }
    if(check==true)
    printf("Yes");
    else
    printf("No");
    return 0;
}