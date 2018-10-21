#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
/*#include<stack>
#include<map>
#include<utility>
#include<algorithm>

using namespace std;*/
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
#define sz 23

/******   start your code   *******/

int main()
{
    int T,N,i,mcount,jcount,x,min;
    LLD mile,juice;
    sf("%d",&T);
    for(x=1;x<=T;x++)
    {
        mile=juice=0;
        sf("%d",&N);
        for(i=0;i<N;i++)
        {
            sf("%d",&min);
            mcount=min/30;
            jcount=min/60;
                mcount++;
            jcount++;
            mile=mile+mcount*10;
            juice=juice+jcount*15;
        }
        if(mile==juice)
            pf("Case %d: Mile Juice %lld\n",x,mile);
        else if(mile<juice)
            pf("Case %d: Mile %lld\n",x,mile);
        else
            pf("Case %d: Juice %lld\n",x,juice);
    }
    return 0;
}



