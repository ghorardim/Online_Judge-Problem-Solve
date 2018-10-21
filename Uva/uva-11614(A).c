#include<stdio.h>
#include<math.h>
int main()
{
    long long int N,i;
    double x;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld",&N);
        x=(sqrt(1+8*N)-1)/2;
        i=(int)x;
        printf("%lld\n",i);
    }
    return 0;
}

