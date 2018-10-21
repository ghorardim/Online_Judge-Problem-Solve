#include<stdio.h>
#include<math.h>
#define max 32769
#define maxi 9078507
char arr[max];
int prime_list[max];
int main()
{
    int n,i,j,k=1,count,minus;
    for(i=4;i<=32769;i=i+2)
        arr[i]=1;
    for(i=3;i<=182;i=i+2)
        if(arr[i]!=1)
        for(j=i*i;j<=32769;j=j+i)arr[j]=1;
    arr[1]=1;
    for(i=2;i<=max;i++)
        if(arr[i]!=1)prime_list[k++]=i;
    while(scanf("%d",&n))
    {
        count=0;
        if(n==0)break;
        for(i=1; ;i++)
        {
            minus=n-prime_list[i];
            if(minus<prime_list[i])
                break;
            if(arr[minus]==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
