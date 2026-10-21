#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    printf("%p\n",&x);
    int* pnt;
    pnt=&x;
     printf("%p\n",&pnt);
    printf("%p\n",pnt);
     printf("%d\n",*pnt);

    *pnt=200;
    printf("%d",x);
    return 0;
}