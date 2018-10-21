#include<stdio.h>
#include<math.h>
#define max 1000
int main()
{
    int arr[max],i,j,ar[max],n,k,a,m;
    while(scanf("%d%d",&m,&n))
    {
        if(m==0 && n==0)break;
        for(i=0;i<max;i++)ar[i]=0;
        a=0;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                k=arr[i]-arr[j];
                if(k<0)k=k*(-1);
                ar[k]=1;
            }
        }
        for(i=0;i<=m;i++)
            if(ar[i]==0)
            {
                a=1;
                break;
            }
            if(a==0)
                printf("Y\n");
            else
                printf("N\n");
    }
    return 0;
}
