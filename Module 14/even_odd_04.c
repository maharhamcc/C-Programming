#include<stdio.h>
void even_odd()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    printf("Even");
    else
    printf("Odd");
}
int main()
{
    even_odd();
    return 0;
}