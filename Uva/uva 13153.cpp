#include<bits/stdc++.h>
using namespace std;
#define sz 100002
#define sz1 1000005
#define pb push_back
#define sf scanf
#define pf printf
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input  freopen("input.txt","r",stdin);
#define f_output freopen("output.txt","w",stdout);
int arr[sz];
int mark[sz1];
vector<int>conum,prnum;
vector<int>v[sz1];
bool vis[sz1];
bool prime[sz1];
int prime_list[sz1];
queue<int>q;
int seive()
{
    int i,j,k,x;
    prime[1]=1;
    x=sqrt(sz1);
    k=0;
    prime_list[k++]=2;
    for(i=3; i<x; i++)
        if(!prime[i])
        {
            prime_list[k++]=i;
            for(j=i*i; j<sz1; j+=i) prime[j]=1;
        }
    return k;

}
void getdivisor(int n)
{
    int i,j,k,x,y;
    x=n;
    for(i=0; prime_list[i]*prime_list[i]<=n; i++)
    {
        y=prime_list[i];

        if(n%y==0)
        {
            while(n%y==0)
            {
                n/=y;
            }
            v[x].pb(y);
            v[y].pb(x);

        }
    }
    if(n>1)
    {
        v[x].pb(n);
        v[n].pb(x);
    }
}
void bfs(int s)
{
    int i,j,k,l,u,x;
    vis[s]=1;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        l=v[u].size();
        for(i=0; i<l; i++)
        {
            x=v[u][i];
            if(!vis[x])
            {
                vis[x]=1;
                q.push(x);
            }
        }
    }
}
int main()
{

    int i,j,k,n,T,cs,a,l,x,primln;
    primln=seive();
    long long int ans;
    scanf("%d",&T);
    for(cs=1; cs<=T; cs++)
    {
        ans=0;
        for(i=0; i<sz1; i++)
        {
            vis[i]=mark[i]=0;
            v[i].clear();
        }
        sf("%d",&n);
        for(i=0; i<n; i++)
        {
            sf("%d",&a);
            mark[a]++;
            if(mark[a]==1)
            {
                if(prime[a] || (a!=2 && !(a&1))) conum.pb(a);
                else prnum.pb(a);
            }
        }

        l=conum.size();
        for(i=0; i<l; i++)
        {
            getdivisor(conum[i]);
        }
        l=prnum.size();
        for(i=0; i<l; i++)
        {
            a=prnum[i];
            if(!vis[a])
            {
                ans++;
                bfs(a);
            }
        }
        l=conum.size();
        for(i=0; i<l; i++)
        {
            a=conum[i];
            if(a==1)
            {
                ans+=mark[a];
            }
            else if(!vis[a])
            {
                ans++;
                bfs(a);
            }
        }
        pf("Case %d: %lld\n",cs,ans);
        conum.clear();
        prnum.clear();
    }
    return 0;
}
/*
7
1
1000000
5
1 3 5 7 11
6
5 10 15 50 20 5
3
5 5 5
5
6 14 7 15 18
7
7 14 7 6 13 18 15
11
16 11 18 12 14 20 18 5 5 20 8
*/
