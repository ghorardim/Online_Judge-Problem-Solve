#include<stdio.h>
int main()
{
    int a,b,c,d,L,i,count,sum;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&L)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;
            count=0;
        for(i=0;i<=L;i++)
        {
            sum=(a*(i*i))+(b*i)+c;
            if(sum%d==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
