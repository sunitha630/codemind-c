#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}