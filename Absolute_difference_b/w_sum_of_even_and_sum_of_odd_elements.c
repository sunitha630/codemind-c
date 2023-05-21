#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,su=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
        else if(a[i]%2!=0)
        {
            su=su+a[i];
        }
    }
    printf("%d",abs(sum-su));
    
}