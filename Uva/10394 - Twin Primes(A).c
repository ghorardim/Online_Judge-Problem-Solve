#include<stdio.h>
#include<math.h>
#define max 20000001
#define maxi 10000000
int arr[max];
int tprime_list[maxi];
int main()
{
    int i,j,k=1,n;
    for(i=4;i<=20000000;i=i+2)
        arr[i]=1;
    for(i=3;i<=14143;i=i+2)
        if(arr[i]==0)
    {
        for(j=i*i;j<=20000000;j=j+i)
            arr[j]=1;
    }
    for(i=3;i<=20000000;i++)
        if(arr[i]==0 && arr[i+2]==0)tprime_list[k++]=i;
    while(scanf("%d",&n)!=EOF)
    {
        printf("(%d, %d)\n",tprime_list[n],tprime_list[n]+2);
    }
    return 0;
}
