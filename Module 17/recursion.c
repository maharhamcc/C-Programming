#include<stdio.h>
void hello()
{
    printf("Hello\n");
    hello();     //infinite loop ; recursion ; don'i run
}    
int main()
{
    printf("Hi\n");
    hello();
    return 0;
}