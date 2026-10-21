#include<stdio.h>
#include<math.h>
int main()
{
    int x=ceil(4.2);
    int y=floor(4.2);
    int z=round(4.4);
    float p=sqrt(20);
    int q=pow(2,3);
    int r=abs(-4);
    printf("%d %d %d\n%f\n%d %d",x,y,z,p,q,r);
    return 0;
}