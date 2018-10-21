#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include<queue>
#include<vector>
#include<algorithm>
#include<bitset>
#include<algorithm>
#include<set>
#include<limits.h>

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
#define sfi(x) scanf("%d",&x)
#define sfc(x) scanf("%c",&x)
#define sfi2(x,y) scanf("%d%d",&x,&y)
#define sfl(x) scanf("%ld",&x)
#define sfll(x) scanf("%lld",&x)
#define sfu(x) scanf("%llu",&x)
#define sfs(x) scanf("%s",x)
#define pf printf
#define pfi(x) printf("%d\n",x)
#define pfl(x) printf("%ld\n",x)
#define pfll(x) printf("%lld\n",x)
#define pfu(x) printf("%llu\n",x)
#define pfs(x) printf("%s\n",x)
#define pfc(x) printf("%c\n",x)
#define pb(x)     push_back(x)
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define nn printf("\n")
// xx-> diagonal -> 8 horizontal/vertical->4
const int xx[] = {0, 1, 0, -1, -1, 1, -1, 1};
const int yy[] = {1, 0, -1, 0, 1, 1, -1, -1};

// KX-> Knight moves
const int kx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int ky[] = {1, 2, 2, 1, -1, -2, -2, -1};


/******** debug **********/
#define chk1  printf("hi......1\n")
#define chk2  printf("hi......2\n")




#define mod 1000003
#define eps 10e-8
#define sz 1002
#define sz1 1004
#define sz2 15
/*******   start my code   ********/
LLD arr[sz][sz];
LLD ar[sz][sz];
class data
{
public:
    int a,b;
    LLD cost;
    data()
    {
        a=b=cost=0;
    }
    data(int an,int bn,int c)
    {
        a=an;
        b=bn;
        cost=c;
    }
};
priority_queue<data>q;
vector<data>v;
bool operator<(data aa,data bb)
{
    return aa.cost>bb.cost;
}
int main()
{
    int T,R,C,er,ec,mn,i,j,x,y,val,ln,A;
    LLD ans;
    bool key;
    data Q,P;
    sfi(T);
    for(i=0; i<sz; i++)
    {
        for(j=0; j<sz; j++)
        {
            arr[i][j]=0;
            ar[i][j]=9999999999;
        }
    }
    while(T--)
    {
        sfi(R);
        sfi(C);
        A=1;
        val=1;
        for(i=0; i<R; i++)
        {
            for(j=0; j<C; j++)
                sfll(arr[i][j]);
        }
        ans=0;
        er=R-1;
        ec=C-1;
        Q.a=0;
        Q.b=0;
        Q.cost=arr[0][0];
        q.push(Q);
        ar[0][0]=arr[0][0];
        key=0;
        if(er!=0 || ec!=0)
        {
            while(!q.empty())
            {
                Q=q.top();
                q.pop();
                for(i=0; i<4; i++)
                {
                    x=Q.a+xx[i];
                    y=Q.b+yy[i];
                    if((x>=0 && y>=0) && (x<R && y<C))
                    {
                        if(Q.cost+arr[x][y]<ar[x][y])
                        {
                            ar[x][y]=Q.cost+arr[x][y];
                            q.push(data(x,y,ar[x][y]));
                        }
                        if(x==er && y==ec)
                        {
                            A++;
                            if(A==3)
                            {
                                key=1;
                                break;
                            }
                        }
                    }
                }
                if(key) break;
            }
        }
        pfll(ar[er][ec]);
        for(i=0; i<sz; i++)
        {
            for(j=0; j<sz; j++)
            {
                arr[i][j]=0;
                ar[i][j]=9999999999;
            }
        }
        ln=q.size();
        for(i=0; i<ln; i++)
        {
            q.pop();
        }
    }
    return 0;
}

