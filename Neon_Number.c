#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sq,sum=0;
    sq=n*n;
    while(sq!=0)
    {
        int r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}