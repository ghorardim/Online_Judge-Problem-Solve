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
#define sz 104
int arr[sz][sz];
int temp[sz];
int kadane(int* ar,int N)
{
    int key=0;
    int maxsum=INT_MIN,sum=0;
    int i;
    for(i=0;i<N;i++)
    {
        sum+=ar[i];
        if(sum<0)
        {
            sum=0;
        }
        else if(maxsum<sum)
        {
            maxsum=sum;
            key=1;
        }
    }
    if(key==1)
        return maxsum;
    maxsum=ar[0];
    for(i=1;i<N;i++)
    {
        if(maxsum<ar[i])
            maxsum=ar[i];
    }
    return maxsum;
}
int main()
{
    int N,i,j,left,right,sum,maxSum;
    while(sf("%d",&N)!=EOF)
    {
        maxSum=INT_MIN;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                sf("%d",&arr[i][j]);
            }
        }
        for(right=0;right<N;right++)
        {
            memset(temp,0,sizeof(temp));
            for(left=right;left<N;left++)
            {
                for(i=0;i<N;i++)
                    temp[i]=temp[i]+arr[left][i];
                sum=kadane(temp,N);
                if(maxSum<sum)
                {
                    maxSum=sum;
                }
            }
        }
        pf("%d\n",maxSum);
    }
    return 0;
}
