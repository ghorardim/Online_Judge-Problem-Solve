#include<stdio.h>
#include<string.h>
#include<algorithm>
#define max 100000000
int arr[max];
unsigned long long int ARR[max];
int main()
{
    unsigned long long int num,asen,dens;
    int k,i,j,coun,f,a;
    while(scanf("%llu",&num))
    {
       if(num==0)break;
       a=f=coun=asen=dens=k=0;
       printf("Original number was %llu\n",num);
       while(1)
       {
           k=0;
         while(num!=0)
         {
             arr[k++]=num%10;
             num=num/10;
         }
         std::sort(arr,arr+k);
         for(i=0,j=k-1 ;i<k && j>=0 ;i++,j--)
         {
            asen=asen*10+arr[i];
            dens=dens*10+arr[j];
         }
         num=dens-asen;
         printf("%llu - %llu = %llu\n",dens,asen,num);
         asen=dens=0;
         coun++;
         if(coun>1)
         {
             for(i=0;i<f;i++)
                if(num==ARR[i])
                {
                    a=1;
                    break;
                }
         }
         ARR[f++]=num;
         if(a==1)break;
       }
       printf("Chain length %d\n\n",coun);
    }
    return 0;
}
