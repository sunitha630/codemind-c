#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	int a[10][10],i,j,sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		   scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j || j==n-1-i)
			{
			sum=sum+a[i][j];
		    }
		}
	}
	printf("%d",sum);
}