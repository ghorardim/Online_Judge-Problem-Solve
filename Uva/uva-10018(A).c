#include<stdio.h>
#include<math.h>
int count;
int main()
{
    unsigned long long int n,rn,dn,sum,rsum,rds;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        count=0;
        scanf("%llu",&n);
        while(1)
        {
            sum=rsum=rn=rds=dn=0;
            dn=n;
            if(dn!=0)
            {
                while(dn!=0)
                {
                    rn=(rn*10)+(dn%10);
                    dn=dn/10;
                }
                count++;
            }
            sum=n+rn;
            rds=sum;
            while(rds!=0)
            {
                rsum=rsum*10+(rds%10);
                rds=rds/10;
            }
            if((sum-rsum)==0)break;
            n=sum;
        }
        printf("%d %llu\n",count,sum);
    }
    return 0;
}

