#include<stdio.h>
int main()
{
	int n,sq,s,r=0,t,h,m=0;
	scanf("%d",&n);
	sq=n*n;
	while(n!=0)
	{
		t=n%10;
		r=(r*10)+t;
		n=n/10;
	}
	s=r*r;
	while(s!=0)
	{
		h=s%10;
		m=(m*10)+h;
		s=s/10;	
	}
	if(m==sq)
	printf("True");
	else
	printf("False");
}