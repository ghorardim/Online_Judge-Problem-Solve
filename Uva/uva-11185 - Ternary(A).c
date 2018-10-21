#include<stdio.h>
#define max 1000000
int arr[max];
int main()
{
    long long int N,k,i;
    while(scanf("%lld",&N))
    {
        k=0;
        if(N<0)break;
        if(N==0)printf("0");
        while(N!=0)
        {
            arr[k++]=N%3;
            N=N/3;
        }
        for(i=k-1;i>=0;i--)
            printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
