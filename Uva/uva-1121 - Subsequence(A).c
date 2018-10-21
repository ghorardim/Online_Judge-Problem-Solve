#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>
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
#define sz 100004
int arr[sz];
int main()
{
    LLU S,sum;
    int low,high,N,i,len,key;
    while(sf("%d%llu",&N,&S)!=EOF)
    {
        key=1;
        for(i=0;i<N;i++)
            sf("%d",&arr[i]);
            high=low=sum=0;
            len=N;
        while(high<N)
        {
            if(sum>=S)
            {
                if(len>(high-low))
                    len=high-low;
                    key=2;
            }
            if(sum>=S && low<high)
            {
                sum-=arr[low];
                low++;
            }
            else
            {
                sum+=arr[high];
                high++;
            }
        }
        if(key==2)
        pf("%d\n",len);
        else
            pf("%0\n");
    }
    return 0;
}
