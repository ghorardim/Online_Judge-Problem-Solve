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
#define size 2000001

/******   start your code   *******/
char arr[size];
int prime_list[size];
long int store[size];
long int dep[size];
int main()
{
    int i,j,k=0,input1,input2,T,n,sq,po;
    LD sum=0,mul=1;
    for(i=4; i<=size; i=i+2)
        arr[i]='1';
    for(i=3; i<=1415; i=i+2)
        if(arr[i]!='1')
            for(j=i*i; j<=size; j=j+i)
                arr[j]='1';
    for(i=2;i<size;i++)
        store[i]=i;
    for(i=2;i<size;i++)
    {
        if(arr[i]!='1')
        {
            for(j=i;j<size;j=j+i)
                store[j]=store[j]-store[j]/i;
        }
    }
    for(i=2; i<size; i++,sum=0)
        {
            po=store[i];
                while(po>=2)
                {
                    po=store[po];
                    sum++;
                }
           sum++;
           dep[i]=sum;
        }
    for(i=2;i<size;i++)
        dep[i]=dep[i]+dep[i-1];
    sf("%d",&T);
    while(T--)
    {
        sf("%d%d",&input1,&input2);
        sum=0;
        pf("%ld\n",dep[input2]-dep[input1-1]);
    }
    return 0;
}
