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
#define size 31624
/******   start your code   *******/

int main()
{
    LD i,j,n1,n2,sq,count,max,maxN,k=0,n,dev;
    int T;
    sf("%d",&T);
    while(T--)
    {
        sf("%ld%ld",&n1,&n2);
        if(n2==1)
        {
           printf("Between 1 and 1, 1 has a maximum of 1 divisors.\n");
           continue;
        }
        max=0;
        maxN=0;
        for(i=n1; i<=n2; i++)
        {
            sq=sqrt(i);
            n=i;
            count=2;
            for(j=2; j<=sq; j++)
            {
                if(i%j==0)
                {
                    count++;
                    n=i/j;
                    if(n!=j)
                        count++;
                }
            }
            if(max<count)
            {
                max=count;
                maxN=i;
            }
        }
        printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n",n1,n2,maxN,max);
    }
    return 0;
}
