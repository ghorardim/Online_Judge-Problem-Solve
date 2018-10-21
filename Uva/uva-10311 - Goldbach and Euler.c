#include<stdio.h>
#include<math.h>
#define max 100000002
#define maxi 5761460
int arr[max];
int prime_list[maxi];
int main()
{
    int n,i,j,k=1,p1,p2,minus,min,half,a;
    for(i=4;i<=100000000;i=i+2)
        arr[i]=1;
    for(i=3;i<=10000;i=i+2)
        if(arr[i]==0)
        for(j=i*i;j<=100000000;j=j+i)arr[j]=1;
    arr[1]=1;
    for(i=1;i<=max;i++)
        if(arr[i]==0)prime_list[k++]=i;
    while(scanf("%d",&n)!=EOF)
    {
        min=100000000;
        a=0;
        half=n/2+1;
       for(i=1;i<=5761458;i++)
       {
           minus=n-prime_list[i];
           if(minus<0 || prime_list[i]>half)
           {
              break;
           }
           else if(arr[minus]==0)
           {
               if(minus-prime_list[i]<0)break;
               else if(min>(minus-prime_list[i]))
               {
                   min=minus-prime_list[i];
                   p1=prime_list[i];
                   p2=minus;
                   a=1;
               }
           }
       }
       if(a==1)printf("%d is the sum of %d and %d.\n",n,p1,p2);
       else printf("%d is not the sum of two primes!\n",n);
    }
    return 0;
}
