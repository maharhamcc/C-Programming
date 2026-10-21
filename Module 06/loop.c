#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    for(int i=1;i<n;i++)
    {
      for(int j=1;j<=x;j++)
      {
        printf("%d ",j);
      }
      printf("\n");
    }
    return 0;
}