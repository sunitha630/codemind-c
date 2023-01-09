#include<stdio.h>
int pal(int n)
{
	int t,r=0,tem;
	tem=n;
	while(n!=0)
	{
		t=n%10;
		r=r*10+t;
		n=n/10;
	}
	if(r==tem)
	return 1;
	else
	return 0;
}

int main()
{
	int n;
	scanf("%d",&n);
	int ld,rd,lp,rp;
	
	for(int i=n-1;;i--)
	{
		if(pal(i))
		{
			ld=n-i;
			lp=i;
			break;
		}	
	}
	for(int i=n+1;;i++)
	{
		if(pal(i))
		{
			rd=i-n;
			rp=i;
			break;
		}
	}
	
	if(rd<ld)
	{
		printf("%d",rp);
	}
	else if(rd>ld)
	{
		printf("%d",lp);
	}
	else
	{
		printf("%d %d",lp,rp);
	}
	
}