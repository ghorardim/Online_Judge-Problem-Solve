#include<stdio.h>
#include<string.h>
#include<math.h>
#define max 100
int main()
{
    char str[max];
    int num,ln,k,n,sum,j;
    double sq;
    while(scanf("%s",str))
    {
        sum=0;
        ln=strlen(str);
        if(ln==1 && str[0]=='0')break;
        for(k=ln,j=0;k>=1 && j<ln;k--,j++)
        {
           sq=pow(2,k)-1;
           n=(str[j]-'0')*sq;
           sum=sum+n;
        }
        printf("%d\n",sum);
    }
    return 0;
}
