#include<stdio.h>
#include<math.h>
#include<algorithm>
#define max 499503
#define maxi 30
int main()
{
    long long int sum[max],stor[max],que[maxi],key;
    int i,n,m,j,k,high,low,mid,a,x=1;;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        k=0;
        for(i=1;i<=n;i++)
            scanf("%lld",&stor[i]);
        scanf("%d",&m);
        for(i=1;i<=m;i++)
            scanf("%lld",&que[i]);
        printf("Case %d:\n",x);
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(i==j)continue;
                sum[k++]=stor[i]+stor[j];
            }
        }
        std::sort(sum,sum+k);
        for(i=1;i<=m;i++)
        {
            high=k-1;
            low=0;
            key=que[i];
            a=1;
            while(low<high-1)
            {
                mid=(high+low)/2;
                if(sum[mid]>key)
                    high=mid;
                else if(sum[mid]==key)
                {
                   printf("Closest sum to %lld is %lld.\n",key,sum[mid]);
                   a=0;
                   break;
                }
                else if(sum[mid]<key)
                    low=mid;
            }
            if(a==1)
            {
                if(sum[high]-key<key-sum[low])
                    printf("Closest sum to %lld is %lld.\n",key,sum[high]);
                else
                    printf("Closest sum to %lld is %lld.\n",key,sum[low]);
            }
        }
        x++;
    }
    return 0;
}
