#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long int a,sum=0;
    
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a);
        sum=sum+a;
    }
    printf("%ld",sum);
}