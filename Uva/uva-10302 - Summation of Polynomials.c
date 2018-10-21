#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int N,sum;
    while(scanf("%llu",&N)!=EOF)
    {
        sum=((N*N)*((N+1)*(N+1)))/4;
        printf("%llu\n",sum);
    }
    return 0;
}
