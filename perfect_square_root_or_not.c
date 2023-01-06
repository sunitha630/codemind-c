#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,sq;
    scanf("%d",&n);
    a=sqrt(n);
    sq=a*a;
    if(sq==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}