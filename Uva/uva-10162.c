#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int N,a;
    int sum,i;
    while(scanf("%llu",&N))
    {
        sum=0;
        if(N==0)break;
        for(i=1;i<=N;i++)
        {
            a=pow(i,i);
            sum=sum+(a%10);
        }
        printf("%d\n",sum%10);
    }
    return 0;
}

