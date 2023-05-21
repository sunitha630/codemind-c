#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se,c=0;
    scanf("%d",&se);
    for(int i=0;i<n;i++)
    {
        if(se==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}