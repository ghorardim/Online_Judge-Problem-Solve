#include<stdio.h>
#include<math.h>
#define max 1000005
#define maxi 78503
int arr[max];
int prime_list[max];
int main()
{
    int n,i,j,k=1,minus,a;
    for(i=4; i<=1000005; i=i+2)
        arr[i]=1;
    for(i=3; i<=1001; i=i+2)
        if(arr[i]!=1)
            for(j=i*i; j<=1000005; j=j+i)arr[j]=1;
    arr[1]=1;
    for(i=1; i<=max; i++)
        if(arr[i]!=1)prime_list[k++]=i;
    while(scanf("%d",&n))
    {
        a=0;
        if(n==0)break;
        printf("%d:\n",n);
        for(i=1; i<maxi; i++)
        {
            minus=n-prime_list[i];
            if(minus<2)break;
            else if(arr[minus]!=1)
            {
                printf("%d+%d\n",prime_list[i],minus);
                a=1;
                break;
            }
        }
        if(a==0)
            printf("NO WAY!\n");
    }
    return 0;
}
