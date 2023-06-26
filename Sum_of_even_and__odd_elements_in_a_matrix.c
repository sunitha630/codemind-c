#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int a[n][m],sum=0,s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(a[i][j]%2==0)
           {
               sum=sum+a[i][j];
              
           }
           else 
           {
               s=s+a[i][j];
           }
        }
    }
        printf("%d %d ",sum,s);
    
    return 0;
}