#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
        
    }
}