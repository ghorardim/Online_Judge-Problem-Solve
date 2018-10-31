#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100008
ll sp[mx+3], a[mx+3];
void seive()
{
    ll x=sqrt(mx);
    for(ll i=2; i<=mx; i+=2) sp[i]=2;
    for(ll i=3; i<=mx; i+=2) sp[i]=i;
    for(ll i=3; i<=x; i+=2)
    {
        if(sp[i]==i)
        {
            for(ll j=i*i; j<=mx; j+=i)
                if(sp[j]==j) sp[j]=i;
        }
    }
}
vector<ll> arr[mx];
map<ll ,map<ll,ll > >mep,mep1;
void precal()
{
    for(ll i=1; i<=mx; i++)
    {
        ll m=i;
        ll mul=1;
        while(m!=1)
        {
            ll x=sp[m];
            ll cnt=0;
            while(m%x==0)
            {
                cnt++;
                m/=x;
            }
            mul*=((cnt*2)+1);
        }
        arr[mul].push_back(i*i);
    }

}
int main()
{
    seive();
    precal();
    ll n,m,div;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&div,&n,&m);
        vector<int>v;
        if(div==1)
        {
            cout<<0<<endl;
            continue;
        }
        ll x=lower_bound(arr[div].begin(),arr[div].end(),n)-arr[div].begin();

        ll y=lower_bound(arr[div].begin(),arr[div].end(),m)-arr[div].begin();

        if(x==arr[div].size() && y==arr[div].size())
            cout<<0<<endl;
        else
        {
            if(y==arr[div].size()) y--;
            if(n<=arr[div][x] && m<arr[div][y]) cout<<y-x<<endl;
            else if(n<=arr[div][x] && m>=arr[div][y]) cout<<y-x+1<<endl;
        }
    }
    return 0;
}

