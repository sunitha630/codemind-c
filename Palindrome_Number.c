#include<stdio.h>
int main()
{
    int tc,i;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        int n,r=0,t,temp;
        scanf("%d",&n);
        temp=n;
        while(n!=0)
        {
            t=n%10;
            r=(r*10)+t;
            n/=10;
        }
        if(temp==r)
        printf("True
");
        else
        printf("False
");
    }
}