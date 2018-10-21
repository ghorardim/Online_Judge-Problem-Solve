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
#define size 1000

/******   start your code   *******/
char str[size];
int store[size];
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int T,i,j,k,num,n,max,res,ln;
    sf("%d",&T);
    getchar();
    while(T--)
    {
        gets(str);
        ln=strlen(str);
        k=0;
        max=0;
        for(i=0; i<ln; i++)
        {
            num=0;
            while(str[i]>='0')
            {
                n=str[i]-'0';
                num=num*10+n;
                i++;
            }
            store[k++]=num;
        }
        for(i=0;i<k;i++)
        {
            for(j=i+1;j<k;j++)
            {
                res=gcd(store[i],store[j]);
                if(max<res)
                    max=res;
            }
        }
        pf("%d\n",max);
        for(i=0;i<k;i++)store[i]=0;
    }
    return 0;
}
