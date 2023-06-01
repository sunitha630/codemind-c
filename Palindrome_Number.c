#include<stdio.h>
int main()
{
    int tc,n;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
        scanf("%d",&n);
        int temp=n,sum=0;
        while(n>0)    
        {    
        int r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
        }    
        if(temp==sum)    
        printf("True
");   
        else
        printf("False
");
        
    }
}