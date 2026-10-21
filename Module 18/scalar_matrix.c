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
int d=a[0][0];
    if(r==c)
    {
          for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=j && a[i][j]!=0)
            flag=200;
           if(i==j && a[i][j]!=d)
           flag=200;
            
        }
    }
     if(flag==100)
         printf("Scalar Matrix");
         else
          printf("Not Scalar Matrix");
    }
    else 
    printf("Scalar Matrix");
    
    return 0;
}