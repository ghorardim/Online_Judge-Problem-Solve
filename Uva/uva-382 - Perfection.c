#include<stdio.h>
#include<math.h>
int main()
{
    int N,half,i,k=0;
    unsigned long long int sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&N))
    {
        if(N==0)break;
        sum=0;
        printf("%5d  ",N);
        if(N==1)
        {
            printf("DEFICIENT\n");
            continue;
        }
        half=N/2+1;
        for(i=2;i<=half;i++)
            if(N%i==0)sum=sum+i;
        if(N==sum+1)
            printf("PERFECT\n");
        else if(N>sum+1)
            printf("DEFICIENT\n");
        else if(N<sum+1)
            printf("ABUNDANT\n");
    }
    printf("END OF OUTPUT\n");
    return 0;
}
