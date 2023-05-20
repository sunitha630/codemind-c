#include<stdio.h>
int main(){
    int n,a=0,b=1,c,co=0;
    scanf("%d",&n);
    c=a+b;
    while(c<=n)
    {
        c=a+b;
        if(n==c)
        {
            co++;
        }
        a=b;
        b=c;
    }
    if(co==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}