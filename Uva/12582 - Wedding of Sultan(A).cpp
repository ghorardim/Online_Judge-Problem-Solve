#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<stack>
#include<map>
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
#define sz 250

/******   start your code   *******/
char str[sz];
int arr[sz];
int main()
{
    int T,x,i,y,z;
    sf("%d",&T);
    stack<char>s;
    for(x=1;x<=T;x++)
    {
        sf("%s",str);
        s.push(str[0]);
        for(i=1;str[i]!='\0';i++)
        {
            if(s.top()!=str[i])
            {
                y=s.top();
                arr[y+127]++;
                y=str[i];
                arr[y+127]++;
                s.push(str[i]);
            }
            else
                s.pop();
        }
        pf("Case %d\n",x);
        for(i=192;i<=217;i++)
        {
            if(arr[i]!=0)
            {
                pf("%c = %d\n",i-127,arr[i]);
                arr[i]=0;
            }
        }
        z=s.size();
        for(i=0;i<z;i++)
            s.pop();
    }
    return 0;
}
