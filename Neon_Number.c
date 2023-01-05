#include<stdio.h>
int main()
{
    int n,sum=0,t,sq,tem;
    scanf("%d",&n);
    tem=n;
    sq=n*n;
    while(sq!=0)
    {
        t=sq%10;
        sum=sum+t;
        sq/=10;
    }
    if(sum==tem)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}