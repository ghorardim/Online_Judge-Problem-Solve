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
#include <sstream>

//#include <bits/stdc++.h>


using namespace std;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;


/*----------simple input section ------------ */
#define sf scanf
#define sfi(x) scanf("%d",&x)
#define sfc(x) scanf("%c",&x)
#define sfi2(x,y) scanf("%d%d",&x,&y)
#define sfll2(x,y) scanf("%lld%lld",&x,&y)
#define sfu2(x,y) scanf("%llu%llu",&x,&y)
#define sfl(x) scanf("%ld",&x)
#define sfll(x) scanf("%lld",&x)
#define sfd(x) scanf("%lf",&x)
#define sfu(x) scanf("%llu",&x)
#define sfs(x) scanf("%s",x)


/*----------simple input section ------------ */
#define pf printf
#define pfi(x) printf("%d\n",x)
#define pfl(x) printf("%ld\n",x)
#define pfll(x) printf("%lld\n",x)
#define pfu(x) printf("%llu\n",x)
#define pfs(x) printf("%s\n",x)
#define pfc(x) printf("%c\n",x)
#define pfd(x) printf("%lf\n",x)

/*----------file input section ------------ */

#define f_input  freopen("input.txt","r",stdin);
#define f_output freopen("output.txt","w",stdout);

#define pb(x) push_back(x)
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define mem(x,y) memset(x,y,sizeof(x))
#define TEST int cs,T;sfi(T);getchar();for(cs=1;cs<=T;cs++)
#define nn printf("\n")
// xx-> diagonal -> 8 horizontal/vertical->4

const int xx[] = {0, 1, 0, -1, -1, 1, -1, 1};
const int yy[] = {1, 0, -1, 0, 1, 1, -1, -1};

// KX-> Knight moves
const int kx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int ky[] = {1, 2, 2, 1, -1, -2, -2, -1};


/******** debug **********/
#define chk1 printf("hi......1  \n")
#define chk2 printf("hi......2  \n")




#define mod  1000000007
#define eps 10e-8
#define sz 100005
#define sz1 28
#define sz2 300
/******* start my code ********/
vector<int>depends[sz2],ans;
int vis[sz2];
int cycle=0;
void visited(int p)
{
    if(vis[p]==2 || cycle) return;
    if(vis[p]==1){
        cycle =1;
        return;
    }
    vis[p]=1;
    int i,l=depends[p].size();
    for(i=0;i<l;i++)
    {
        visited(depends[p][i]);
    }
    vis[p]=2;
    ans.pb(p);
}
int main()
{
    int i,j,k,n,m,a,b;
    while(sfi2(n,m))
    {
        if(n==0 && m==0) break;
        while(m--)
        {
            sfi2(a,b);
            depends[b].pb(a);
        }
        for(i=1;i<=n;i++) visited(i);
        k=ans.size();
        for(i=0;i<k;i++)
        {
            pf("%d",ans[i]);
            if(i<k-1) pf(" ");
        }
        nn;
        mem(vis,0);
        ans.clear();
        for(i=0;i<122;i++) depends[i].clear();
    }
    return 0;
}

/*


*/
