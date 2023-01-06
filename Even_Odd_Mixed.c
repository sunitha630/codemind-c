#include<stdio.h>
int main()
{
    int ec=0,oc=0,c=0,n,t,i;
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        c++;
        if(t%2==0)
        {
        ec++;
        }
        else if(t%2!=0)
        {
        oc++;
        }
        n/=10;
    }
    if(c==ec)
    printf("Even");
    else if(c==oc)
    printf("Odd");
    else
    printf("Mixed");
}