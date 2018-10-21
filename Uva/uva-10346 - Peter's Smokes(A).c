#include<stdio.h>
int main()
{
    unsigned long long int n,k,sum,stor;
    while(scanf("%llu%llu",&n,&k)!=EOF)
    {
        sum=n;
        stor=0;
        while(n>=k)
        {
            stor=n%k;
            n=n/k;
            sum=sum+n;
            n=n+stor;
        }
        printf("%llu\n",sum);
    }
    return 0;
}
