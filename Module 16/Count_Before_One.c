#include<stdio.h>
int count_before_one(int A[],int N)
{   
    int count=0;
    for(int i=0;A[i]!=1;i++)
    {
        if(i<N)
        count++;
    }
    return count;
}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    scanf("%d",&A[i]);
    int count=count_before_one(A,N);
    printf("%d ",count);
    return 0;
}