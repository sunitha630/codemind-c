#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	scanf("%d",&n);
	c=a+b;
     while(c<=n)
	{
		c=a+b;
		a=b;
		b=c;
	}
	if(n-a<b-n)
	printf("%d",a);
	else if(n-a>b-n)
	printf("%d",b);
	else if(n-a==b-n)
	printf("%d %d",a,b);
}