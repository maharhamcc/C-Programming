#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
int flag=100;
    if(r==c)
    {
          for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=j && a[i][j]!=0)
            flag=200;
           if(i==j && a[i][j]!=1)
           flag=200;
            
        }
    }
     if(flag==100)
         printf("Unit Matrix");
         else
          printf("Not Unit Matrix");
    }
    else 
    printf("Unit Matrix");
    
    return 0;
}