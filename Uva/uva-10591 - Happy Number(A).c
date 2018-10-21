#include<stdio.h>
#include<string.h>
int main()
{
   unsigned long long int T,N,n,m,sum,x=1,b;
   scanf("%llu",&T);
   while(T--)
   {
       n=1;
       sum=m=0;
       scanf("%llu",&N);
       b=N;
       while(n)
       {
           while(N)
           {
               m=N%10;
               sum=sum+(m*m);
               N=N/10;
           }
           N=sum;
           sum=0;
           n=N/10;
       }
       if(N==1)
        printf("Case #%llu: %llu is a Happy number.\n",x,b);
       else
        printf("Case #%llu: %llu is an Unhappy number.\n",x,b);
       x++;
   }
    return 0;
}
