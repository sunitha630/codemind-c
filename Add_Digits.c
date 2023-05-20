#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=10;
    while(sum>=10)
    {
        sum=0;
        while(n!=0)
        {
            int r=n%10;
            sum=sum+r;
            n/=10;
        }
        n=sum;
    }
    printf("%d",n);
}