#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int a[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            scanf("%d",&a[i][j]);
    }
int flag=100;
    if(N==M)
    {
          for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(i+j!=N-1 && i!=j && a[i][j]!=0)
             flag=200;
             if(i+j==N-1 && a[i][j]!=1)
             flag=200;
             if(i==j && a[i][j]!=1)
             flag=200;
            
        }
    }
     if(flag==100)
         printf("YES");
         else
         printf("NO");
    }
    else 
    printf("NO");
    
    return 0;
}