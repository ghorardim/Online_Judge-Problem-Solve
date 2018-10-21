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
const int xx[] = {0, 0, 1, -1, -1, 1, -1, 1};
const int yy[] = {1, -1, 0, 0, 1, 1, -1, -1};

// KX-> Knight moves
const int kx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int ky[] = {1, 2, 2, 1, -1, -2, -2, -1};


/******** debug **********/
#define chk1  printf("hi......1\n")
#define chk2  printf("hi......2\n")




#define mod 1000003
#define eps 10e-8
#define sz 1005
#define sz1 100004
#define sz2 15
/*******   start my code   ********/
int arr[sz][sz];
class data
{
public:
    int a,b;
    data()
    {
        a=b=0;
    }
};
queue<data>q;
vector<data>v;
int main()
{
    int R,C,bomb,r,n,c,sr,sc,er,ec,x,y,val,j,i,ln,s;
    bool key;
    data Q,P;
    memset(arr,0,sizeof(arr[0][0])*sz*sz);
    while(sfi2(R,C)!=EOF)
    {
        if(R==0 && C==0) break;
        sfi(bomb);
        val=0;
        key=0;
        for(i=0; i<bomb; i++)
        {
            sfi2(r,n);
            for(j=0; j<n; j++)
            {
                sfi(c);
                arr[r][c]=-1;
            }
        }
        sfi2(sr,sc);
        sfi2(er,ec);
        arr[sr][sc]=0;
        val++;
        Q.a=sr;
        Q.b=sc;
        q.push(Q);
        if(sr!=er || sc!=ec)
        {
            while(!q.empty())
            {
                Q=q.front();
                q.pop();
                for(i=0; i<4; i++)
                {
                    x=Q.a+xx[i];
                    y=Q.b+yy[i];
                    if((x>=0 && y>=0) && (x<R && y<C))
                    {
                        if(arr[x][y]==0)
                        {
                            arr[x][y]=val;
                            P.a=x;
                            P.b=y;
                            v.pb(P);
                            if(x==er && y==ec)
                            {
                                key=1;
                                break;
                            }
                        }
                    }
                }
                if(key) break;
                if(q.empty() && !v.empty())
                {
                    ln=v.size();
                    for(i=0; i<ln; i++)
                        q.push(v[i]);
                    v.clear();
                    val++;
                }
            }
        }
        pfi(arr[er][ec]);
        memset(arr,0,sizeof(arr[0][0])*sz*sz);
        ln=q.size();
        for(i=0;i<ln;i++)
            q.pop();
        v.clear();
    }
    return 0;
}

