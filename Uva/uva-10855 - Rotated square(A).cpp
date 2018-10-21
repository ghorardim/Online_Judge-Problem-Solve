#include<iostream>
#include<stdio.h>
#include<string>
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
#define sz 1000

/******   start your code   *******/
int string_search(string big[sz],string Nstr[sz],int N,int n)
{
    int i,j,k,x,y,coun,key;
    string str;
    key=coun=0;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            key=0;
            if(big[i][j]==Nstr[0][0] && (j+(n-1))<N && (i+(n-1)<N))
            {
                x=i;
                y=j;
                for(k=0; k<n; k++,x++)
                {
                    str=big[x].substr(j,n);
                    if(Nstr[k]!=str)
                    {
                        key=1;
                        break;
                    }
                    else
                        key=3;
                }
            }
            if(key==3)
                coun++;
        }
    }
    return coun;
}
int main()
{
    int N,n,i,j,k,a,b,c,d;
    string big[sz],small[sz],str90[sz],str180[sz],str270[sz];
    while(sf("%d%d",&N,&n))
    {
        if(N==0 && n==0)break;
        for(i=0; i<N; i++)
            cin>>big[i];
        for(i=0; i<n; i++)
            cin>>small[i];
        for(i=0,k=n-1; i<n && k>=0; i++,k--)
        {
            for(j=0; j<n ; j++)
                str90[j]+=small[k][j];
        }
        for(i=0,k=n-1; i<n && k>=0; i++,k--)
        {
            for(j=0; j<n ; j++)
                str180[j]+=str90[k][j];
        }
        for(i=0,k=n-1; i<n && k>=0; i++,k--)
        {
            for(j=0; j<n ; j++)
                str270[j]+=str180[k][j];
        }
        a=string_search(big,small,N,n);
        b=string_search(big,str90,N,n);
        c=string_search(big,str180,N,n);
        d=string_search(big,str270,N,n);
        printf("%d %d %d %d\n",a,b,c,d);
        for(i=0;i<N;i++)
            big[i].clear();
        for(i=0;i<n;i++)
        {
            small[i].clear();
            str90[i].clear();
            str180[i].clear();
            str270[i].clear();
        }
    }
    return 0;
}
