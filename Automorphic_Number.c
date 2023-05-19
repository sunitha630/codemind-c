#include<stdio.h>
int is_auto(int n)
{
    int sq=n*n;
    while(n>0)
    {
        if(n%10!=sq%10)
        {
            return 0;
        }
        n/=10;
        sq/=10;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(is_auto(n))
    {
        printf("Automorphic Number");
    }
    else
    {
         printf("Not an Automorphic Number");
    }
}