#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<stack>
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
#define sz 1004
char str[sz];

/******   start your code   *******/

int main()
{
    int i,j,no_stk,x=1;
    while(sf("%s",str)!=EOF)
    {
        if(str[0]=='e')break;
        stack<char>stk[sz];
        stk[0].push(str[0]);
        no_stk=1;
        for(i=1;str[i]!='\0';i++)
        {
            bool key=false;
            for(j=0;j<no_stk;j++)
            {
                if(stk[j].top()>=str[i])
                {
                   stk[j].push(str[i]);
                   key=true;
                   break;
                }
            }
            if(key==false)
            {
                stk[no_stk++].push(str[i]);
            }
        }
        pf("Case %d: %d\n",x++,no_stk);

    }
    return 0;
}
