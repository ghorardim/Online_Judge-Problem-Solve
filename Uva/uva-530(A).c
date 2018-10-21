#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int fact,a,b,minus,i,j,min;
    while(scanf("%llu%llu",&a,&b))
    {
        fact=1;
        if(a==0 && b==0)break;
        minus=a-b;
        if(minus<b)
            min=minus;
        else min=b;
        for(i=1;i<=min;i++)
        {
            fact=fact*(a-min+i);
            fact=fact/i;
        }
        printf("%llu\n",fact);
    }
    return 0;
}

