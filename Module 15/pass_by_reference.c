#include<stdio.h>
void func(int* x)
{
    *x=20;
    printf("%d\n func_add : %p\n",x,&x);
}
int main()
{
    int x=10;
    func(&x);
    printf("%d\n main_add : %p",x,&x);
    return 0;
}