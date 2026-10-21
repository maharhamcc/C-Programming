#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      int x;
      scanf("%d",&x);
      long long int mul=1;
      for(int j=1;j<=x;j++)
      {
        mul=mul*j;
      }
      printf("%lld\n",mul);
    }
    return 0;
}