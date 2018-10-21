#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int c,d,a,b;
    int T,k;
    double e,f;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%llu%llu",&a,&b);
        k=0;
        if(b>a)k=1;
        else
        {
            e=(float)(a+b)/2;
            f=(float)(a-b)/2;
            c=(int)e;
            d=(int)f;
        }
        if(e!=c || f!=d)k=1;
        if(k==1)printf("impossible\n");
        else
            printf("%llu %llu\n",c,d);
    }
    return 0;
}

