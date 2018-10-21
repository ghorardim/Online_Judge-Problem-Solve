#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>
#include<deque>
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
#define sz 100002
#define sz1 102

/******   start your code   *******/
deque<char>d;
char str[sz];
int main()
{
    int i,j,k,ln;
    char ch;
    while(sf("%s",str)!=EOF)
    {
        ch=']';
        j=0;
        for(i=0;str[i];i++)
        {
            if(str[i]=='[')
            {
                ch='[';
             //   continue;
            }
            else if(str[i]==']')
            {
                ch=']';
                continue;
            }
            if(ch==']')
            {
                d.push_back(str[i]);
                j=0;
            }
            else if(ch=='[')
            {
                j=0;
                ch='a';
            }
            else
            {
               d.insert(d.begin()+j,str[i]);
               j++;
               ch='a';
            }
        }
        ln=d.size();
        for(i=0;i<ln;i++)
            pf("%c",d[i]);
        pf("\n");
        d.clear();
    }
    return 0;
}


