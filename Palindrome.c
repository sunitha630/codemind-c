#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    int v=n;
    while(n!=0)
    {
        int r=n%10;
        rev=(rev*10)+r;
        n/=10;
    }
    if(rev==v)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}