#include<stdio.h>
int fact(int n)
{
    if(n==1 || n==0)
    {
    return 1;
    }
    else
    {
    return n*fact(n-1);
    }
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int v=n;
    while(n!=0)
    {
        int r=n%10;
        sum=sum+fact(r);
        n/=10;
    }
    if(sum==v)
    printf("The number %d is a strong number",v);
    else
    printf("The number %d is not a strong number",v);
}