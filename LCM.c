#include<stdio.h>
int main()
{
    int max,min,a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    int i=max;
    while(1)
    {
        if(max%min!=0)
        max=max+i;
        else
         break;
    }
    printf("%d",max);
}