#include<stdio.h>
int main()
{
    long long int count,i;
    long int n;
    while(scanf("%ld",&n)!=EOF)
    {
        count=0;
       for(i=0;i<=n;i++)
       {
           if((n-i)%2==0)
           count++;
       }
       printf("%lld\n",(count*(count+1)/2));
    }
    return 0;
}
