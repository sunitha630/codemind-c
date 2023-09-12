#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c=0;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++)
        {
        if(i%10==2 || i%10==3 || i%10==9)
        {
           c++; 
        }
        }
         printf("%d
",c);
    }
    
}