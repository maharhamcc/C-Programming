#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk >= 100)
    {
        printf("I will buy a burger");
    }
    else if (tk >=50)
    {
        printf("I will buy Fusca");
    }
    else if (tk >=20)
    {
        printf("I will buy juice");
    }
    else
    {
        printf("I won't buy anything");
    }
    return 0;
}