#include<stdio.h>
#include<math.h>
#define max 10002
int main()
{
    int n,T,i,j,arr[max],x;
    for(i=4;i<=10000;i=i+2)
        arr[i]=1;
    for(i=3;i<=10000;i=i+2)
        if(arr[i]==0)
        for(j=i*i;j<=10000;j=j+i)arr[j]=1;
    arr[1]=1;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        x=n/2-10;
        for(i=x;i<=n;i++)
        {
            if(arr[i]==0 && i*2>n)
            {
              printf("%d\n",i);
              break;
            }
        }
    }
    return 0;
}

