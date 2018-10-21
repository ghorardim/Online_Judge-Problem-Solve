#include<stdio.h>
#define max 100000000
long long int arr[max];
int main()
{
    long long int n,N,M,coun,i,mm;
    while(scanf("%lld%lld",&N,&M))
    {
        mm=coun=0;
        if(N==0 && M==0)break;
        for(i=1;i<=N;i++)
        {
            scanf("%lld",&n);
            arr[n]=1;
            if(mm<n)
                mm=n;
        }
        for(i=1;i<=M;i++)
        {
            scanf("%lld",&n);
            if(arr[n]==1)
                coun++;
        }
        printf("%lld\n",coun);
        for(i=1;i<=mm;i++)
            arr[i]=0;
    }
    return 0;
}

