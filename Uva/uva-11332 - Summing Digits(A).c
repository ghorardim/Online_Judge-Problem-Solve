#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long int N,sum,n;
    while(scanf("%llu",&N)!=EOF)
    {
        if(N==0)break;
        sum=0;
        n=1;
        while(n)
        {
            while(N!=0)
            {
                sum=sum+N%10;
                N=N/10;
            }
            N=sum;
            n=sum/10;
            sum=0;
        }
        printf("%llu\n",N);
    }
    return 0;
}
