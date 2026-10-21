#include<stdio.h>
void even_odd(int num1)
{
    if(num1%2==0)
    printf("Even");
    else
    printf("Odd");
}
int main()
{
    int a;
    scanf("%d",&a);
    even_odd(a);
    return 0;
}