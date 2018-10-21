#include<stdio.h>
int main()
{
    unsigned long long int taka,n,m,j;
    int x=1;
    while(scanf("%llu",&taka)!=EOF)
    {
        printf("%4d.",x);
        if(taka<1)printf(" %llu",taka);
        if(taka/10000000)
        {
            n=taka/10000000;
            if(n/100000)
            {
                m=n/100000;
                if(m/100)
                {
                    j=m/100;
                    printf(" %llu kuti",j);
                    m=m-j*100;
                }
                if(m)
                printf(" %llu lakh",m);
                m=n/100000;
                n=n-m*100000;
            }
            if(n/1000)
            {
                m=n/1000;
                printf(" %llu hajar",m);
                n=n-(m*1000);
            }
            if(n/100)
            {
                m=n/100;
                printf(" %llu shata",m);
                n=n-(m*100);
            }
            if(n)
                printf(" %llu",n);
                printf(" kuti");
            n=taka/10000000;
            taka=taka-(n*10000000);
        }
        if(taka/100000)
        {
            n=taka/100000;
            printf(" %llu lakh",n);
            taka=taka-(n*100000);
        }
        if(taka/1000)
        {
            n=taka/1000;
            printf(" %llu hajar",n);
            taka=taka-(n*1000);
        }
        if(taka/100)
        {
            n=taka/100;
            printf(" %llu shata",n);
            taka=taka-(n*100);
        }
        if(taka)
            printf(" %llu",taka);
        printf("\n");
        x++;
    }
    return 0;
}
