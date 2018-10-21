#include<stdio.h>
#include<algorithm>
#define max 20002
int main()
{
    int T,n,arr[max],i,sum,j;
    scanf("%d",&T);
    while(T--)
    {
        sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        std::sort(arr,arr+n);
        for(i=n-3;i>=0;i=i-3)
            sum=sum+arr[i];
        printf("%d\n",sum);
    }
    return 0;
}

