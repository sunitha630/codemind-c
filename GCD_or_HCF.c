#include<stdio.h>
int main()
{
    int a,b,min;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
       min=b;
    }
    else
    {
        min=a;
    }
    while(1)
    {
        if(a%min==0 && b%min==0)
        {
            break;
        }
        else
        {
            min-=1;
        }
    }
    printf("%d",min);
}