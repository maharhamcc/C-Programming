#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    int x=1;
    int n=2*(N-1)+1;
    int space=N-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        printf(" ");
        for(int j=1;j<=x;j++)
        {
            if(i%2!=0)
            printf("#");
            else
            printf("-");
        }
        if(i<N)
        {
            x+=2;
        space--;
        }
        else
        { 
            x-=2;
        space++;
        }
        printf("\n");
    }
    return 0;
}