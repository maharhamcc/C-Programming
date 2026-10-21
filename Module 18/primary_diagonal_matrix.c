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
            if(i!=j&& a[i][j]!=0)
           {
            flag=200;
             printf("Not Diagonal Matrix");
           }
            
        }
    }
     if(flag==100)
         printf("Diagonal Matrix");
    }
    else 
    printf("Not Diagonal Matrix");
    
    return 0;
}