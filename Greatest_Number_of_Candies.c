#include<stdio.h>
int max(int *arr,int n)
{
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
        }
    }
    return l;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int u;
    scanf("%d",&u);
    int ma=max(a,n);
    for(int i=0;i<n;i++)
    {
        if(a[i]+u>=ma)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}