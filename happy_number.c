#include<stdio.h>
int main()
{
    int n,sum=10;
    scanf("%d",&n);
    while(sum>=10)
    {
        sum=0;
        while(n!=0)
        {
            int r=n%10;
            sum=sum+(r*r);
            n/=10;
        }
        n=sum;
    }
    if(sum==1 || sum==7)
    printf("True");
    else
    printf("False");
    
}