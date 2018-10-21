#include<stdio.h>
#define max 31
int main()
{
    int n,p,q,t,l,i,coun,sum,arr[max],con;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        sum=coun=0;
        scanf("%d%d%d\n",&n,&p,&q);
        for(i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        for(i=1;arr[i]<=q && i<=p && i<=n;i++)
        {
            sum=sum+arr[i];
            if(sum>q)
                break;
        }
        printf("Case %d: %d\n",l,i-1);
    }
    return 0;
}
