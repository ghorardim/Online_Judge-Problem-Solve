#include<stdio.h>
#define max 11
int main()
{
    int arr[max],i,T,age,n,cap,x=1;;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        cap=n/2;
        printf("Case %d: %d\n",x,arr[cap]);
        x++;
    }
    return 0;
}
