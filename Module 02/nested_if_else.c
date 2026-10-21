#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk >= 5000)
    {
        printf("I will go to Cox's Bazar\n");
        if (tk >=10000)
        {
            printf("I will go to Seint Martin");
        
        }
        else
        {
            printf("I won't go to seint martin");
        }
    }
    else
    {
        printf("I won't go anywhere");
    }
    return 0;
}