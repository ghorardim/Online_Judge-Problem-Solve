#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<stack>
#include<map>
#include<string.h>
#include<bitset>
/*#include<algorithm>*/

using namespace std;
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
#define sz 200

/******   start your code   *******/
string arr;
string brr;
bitset<sz>X,Y;
int main()
{
    int T,x,ln1,ln2,i;
    LLU A,B,def;
    sf("%d",&T);
    for(x=1; x<=T; x++)
    {
        sf("%llu%llu",&A,&B);
        def=B-A;
        while(A)
        {
            arr+=((A%2)+'0');
            A=A/2;
        }
        while(B)
        {
            brr+=((B%2)+'0');
            B=B/2;
        }
        ln1=arr.size();
        ln2=brr.size();
        if(ln1<ln2)
        {
            for(i=ln1-1; i<ln2-1; i++)
                arr+='0';
        }
        for(i=0; i<ln2; i++)
        {
            if(pow(2,i)<=def)
                X[i]=true;
            else
            {
                if(arr[i]=='0' && brr[i]=='0')
                    X[i]=false;
                else
                    X[i]=true;
            }
        }
        for(i=0; i<ln2; i++)
        {
            if(pow(2,i)<=def)
                Y[i]=false;
            else
            {
                if(arr[i]=='1' && brr[i]=='1')
                    Y[i]=true;
                else
                    Y[i]=false;
            }
        }
        pf("Case %d: ",x);
        cout<<X.to_ulong()<<" "<<Y.to_ulong()<<endl;
        arr.clear();
        brr.clear();
        X.reset();
        Y.reset();
    }
    return 0;
}
