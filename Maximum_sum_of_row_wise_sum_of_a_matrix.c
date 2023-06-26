#include<stdio.h>
int main()
{
    int n,m,i,j,max_sum=0;
    scanf("%d %d",&n,&m);
    int a[n][m],sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
        if(sum>max_sum)
        {
            max_sum=sum;
        }
        
    }
    printf("%d",max_sum);
    return 0;
}