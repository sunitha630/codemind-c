#include<stdio.h>
int is_p(int number)
{
    for(int i=0;i<=number/2;i++)
    {
        if(i*(i+1)==number)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(is_p(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}