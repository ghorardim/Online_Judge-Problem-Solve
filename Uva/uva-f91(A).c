#include<stdio.h>
long long int f91(long long int a)
{
    if(a>=101)
    {
        a=a-10;
        return a;
    }
    return f91(f91(a+11));
}
int main()
{
    long long int n;
    while(scanf("%lld",&n))
    {
        if(n==0)break;
    printf("f91(%lld) = %lld\n",n,f91(n));
    }
    return 0;
}
