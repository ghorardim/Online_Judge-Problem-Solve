#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
/*#include<algorithm>*/

/*using namespace std;*/
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;

#define sf scanf
#define pf printf
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FOR1(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 10000

/******   start your code   *******/
LLU gcd(LLU a, LLU b)
{
    return b == 0 ? a : gcd(b, a % b);
}

LLU lcm(LLU a, LLU b)
{
    return (a / gcd(a, b)) * b;
}
LLU devisor[size];
int main()
{
    LLU n,div;
    int k,sq,count,i,j;
    while(sf("%llu",&n))
    {
        if(n==0)break;
        if(n==1)
        {
            pf("1 1\n");
            continue;
        }
        count=0;
        k=2;
        sq=sqrt(n);
        devisor[0]=1;
        devisor[1]=n;
        for(i=2; i<=sq; i++)
        {
            if(n%i==0)
            {
                devisor[k++]=i;
                div=n/i;
                if(i!=div)
                    devisor[k++]=div;
            }
        }
        for(i=0; i<k; i++)
        {
            for(j=i; j<k; j++)
            {
                if(n==lcm(devisor[i],devisor[j]))
                {
                    count++;
                }
            }
        }
        pf("%llu %d\n",n,count);
    }
    return 0;
}

