#include<stdio.h>
#include<algorithm>
#define max 100000000
int arr[max];
int main()
{
    int k,n,con,mid,N;
    k=1;
    scanf("%d",&N);
    printf("%d\n",N);
    arr[0]=N;
    while(scanf("%d",&N)!=EOF)
    {
       arr[k++]=N;
       std::sort(arr,arr+k);
       n=k-1;
       con=n/2;
       if(k%2==0)
       {
           mid=(arr[con]+arr[con+1])/2;
           printf("%d\n",mid);
       }
       else
        printf("%d\n",arr[con]);

    }
    return 0;
}
