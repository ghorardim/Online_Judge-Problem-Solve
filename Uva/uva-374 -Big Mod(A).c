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
#define size 19999

/******   start your code   *******/
unsigned long long big_mod(unsigned long long base,unsigned long long power,unsigned long long mod)
{
    if(power==0)return 1;
    else if(power%2==1)
    {
        unsigned long long p1=base%mod;
        unsigned long long p2=(big_mod(base,power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else if(power%2==0)
    {
        unsigned long long p1=(big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}
int main()
{
    unsigned long long b,p,m,r;
    while(scanf("%llu %llu %llu",&b,&p,&m)==3)
    {
        r=big_mod(b,p,m);
        printf("%llu\n",r);
    }
    return 0;
}
