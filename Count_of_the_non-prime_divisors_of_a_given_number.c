#include<stdio.h>
int prime(int n)
{
    int co=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            co++;
        }
    }
    if(co==2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(prime(i)==-1)
            {
               c++;
            }
        }
    }
     printf("%d",c);
}