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
#define size 1004
LLD arr[]={1,1,2,3,5,8,13,21,34,55,89,144,233,377,
610,987,1597,2584,4181,6765,10946,17711,
28657,46368,75025,121393,196418,317811,514229,
832040,1346269,2178309,3524578,5702887,9227465,
14930352,24157817,39088169,63245986,102334155,
165580141,267914296,433494437,701408733,1134903170,
1836311903,
2971215073,
4807526976,7778742049,
12586269025,20365011074,32951280099,53316291173,
86267571272,139583862445,225851433717,365435296162,
591286729879,956722026041,1548008755920,2504730781961,
4052739537881,6557470319842,10610209857723,
17167680177565,27777890035288,44945570212853,
72723460248141,117669030460994,190392490709135,
308061521170129,498454011879264,806515533049393,
1304969544928657,2111485077978050,3416454622906707,
5527939700884757,8944394323791464,14472334024676221,
23416728348467685,37889062373143906,61305790721611591
};

/******   start your code   *******/

int main()
{
    int n;
    while(sf("%d",&n))
    {
        if(n==0)break;
        pf("%lld\n",arr[n]);
    }
    return 0;
}
