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
#include<sstream>

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




#define mod 1000000007
#define eps 10e-8
#define sz 2005
#define sz1 302
#define sz2 5
/******* start my code ********/
int vis[sz];
int vis1[sz];
vector<int>node[sz];
vector<pair<int,int> >v;
vector<pair<int,int> >stor;
set<int>s;
queue<int>q;
void knap(int fst,int snd,int i,int n,int b,int c)
{
    if(i==n)
    {
        pair<int,int>e;
        e.first=e.second=0;
        e.first=fst;
        e.second=snd;
        stor.pb(e);
        return;
    }
    if(fst+v[i].first<=b && snd+v[i].second<=c)
    knap(fst+v[i].first,snd+v[i].second,i+1,n,b,c);
    if(fst+v[i].second,snd+v[i].first)
    knap(fst+v[i].second,snd+v[i].first,i+1,n,b,c);
}
int main()
{
    int i,j,k,b,c,n,x,y,u,l,z;
    LLD T;
    pair<int,int>p;
    bool key;
    sfll(T);
    while(T--)
    {
        mem(vis,0);
        sfi2(b,c);
        sfi(n);
        key=1;
        for(i=0; i<n; i++)
        {
            sfi2(x,y);
            node[x].pb(y);
            node[y].pb(x);
            s.insert(x);
            s.insert(y);
        }
        set<int> :: iterator it;
        for(it=s.begin(); it!=s.end(); it++)
        {
            u=*it;
            if(vis[u]) continue;
            vis[u]=1;
            q.push(u);
            p.first=1;
            p.second=0;
            while(!q.empty())
            {
                u=q.front();
                q.pop();
                l=node[u].size();
                for(i=0; i<l; i++)
                {
                    if(vis[node[u][i]]==vis[u])
                    {
                        key=0;
                        break;
                    }
                    if(!vis[node[u][i]])
                    {
                        if(vis[u]==1)
                        {
                            vis[node[u][i]]=2;
                            p.second++;
                        }
                        else
                        {
                            vis[node[u][i]]=1;
                            p.first++;
                        }
                        q.push(node[u][i]);
                    }
                }
            }
            v.pb(p);
            if(!key) break;
        }
        if(key)
        {
            key=0;
            x=y=0;
            for(i=1; i<=b+c; i++)
                if(vis[i]==0) x++;
            knap(0,0,0,v.size(),b,c);
            int l=stor.size();
            for(i=0;i<l;i++)
            {
                if(x)
                {
                    if((b>=stor[i].first && c>=stor[i].second)&& (b-stor[i].first)+(c-stor[i].second)==x)
                    {
                        key=1;
                        break;
                    }
                }
                else
                {
                        if(stor[i].first==b && (stor[i].second==c))
                        {
                            key=1;
                            break;
                        }
                }
                if(key) break;
            }
            if(key) pfs("yes");
            else pfs("no");
        }
        else
            pf("no\n");
        s.clear();
        for(i=1; i<=b+c; i++)
            node[i].clear();
        stor.clear();
        v.clear();
    }
    return 0;
}
