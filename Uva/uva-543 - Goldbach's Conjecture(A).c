#include<stdio.h>
#include<math.h>
#define max 10000005
#define maxi 9078507
int arr[max];
int prime_list[max];
int main()
{
    int n,i,j,k=1,p1,p2,minus,min,half,a;
    for(i=4;i<=1000007;i=i+2)
        arr[i]=1;
    for(i=3;i<=1000;i=i+2)
        if(arr[i]!=1)
        for(j=i*i;j<=1000007;j=j+i)arr[j]=1;
    arr[1]=1;
    for(i=1;i<=max;i++)
        if(arr[i]!=1)prime_list[k++]=i;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        min=10000005;
        a=0;
        half=n/2+1;
       for(i=1;i<=maxi;i++)
       {
           minus=n-prime_list[i];
           if(minus<0 || prime_list[i]>half)
           {
              break;
           }
           else if(arr[minus]!=1)
           {
                   p1=prime_list[i];
                   p2=minus;
                   a=1;
                   break;
           }
       }
       if(a==1)printf("%d = %d + %d\n",n,p1,p2);
       else printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
