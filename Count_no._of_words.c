#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    scanf("%[^
]s",s1);
    int c=0;
    for(int i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]==' '&&s1[i+1]!=' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
}