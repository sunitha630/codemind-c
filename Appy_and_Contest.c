#include<stdio.h>
int main()
{
    int tc,n,a,b,k,u;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        scanf("%d %d %d %d",&n,&a,&b,&k);
        u=(n/a)+(n/b);
        if(u>=k)
        printf("Win
");
        else
        printf("Lose
");
    }

    
}