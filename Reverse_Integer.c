#include<stdio.h>
int main()
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
        printf("%d",r);
        
    
}