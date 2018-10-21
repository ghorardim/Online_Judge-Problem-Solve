#include<stdio.h>
#include<math.h>
#define max 101
int main()
{
    unsigned long long int arr[max];
    int i,N;
    arr[1]=1;
    arr[0]=0;
    for(i=2;i<max;i++)
    {
        arr[i]=(i*i)+arr[i-1];
    }
    while(scanf("%d",&N))
    {
        if(N==0)break;
        printf("%d\n",arr[N]);
    }
    return 0;
}
