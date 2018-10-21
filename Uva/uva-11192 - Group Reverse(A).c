#include<stdio.h>
#include<string.h>
#define max 105
int main()
{
    char str[max];
    int i,n,d,ln;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        scanf("%s",str);
        ln=strlen(str);
        n=ln/n;
        d=n;
        while(n<=ln)
        {
        for(i=n-1;i>=(n-d);i--)
            printf("%c",str[i]);
        n=n+d;
        }
        printf("\n");
    }
    return 0;
}
