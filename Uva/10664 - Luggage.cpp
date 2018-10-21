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




#define mod 1000000007
#define eps 10e-8
#define sz 100005
#define sz1 302
#define sz2 5
/******* start my code ********/
vector<int>v;
char str[sz];
bool knap(int i,int l,int val,int x)
{
    if(i>=l) return 0;
    if(i==l || val==x)
    {
        if(val==x)
        {
            // chk1;
            return 1;
        }
    }
    bool k1,k2;
    k1=k2=0;
    if(val+v[i]<=x)
        k1=knap(i+1,l,val+v[i],x);
    k2=knap(i+1,l,val,x);
    return k1 || k2;
}
int main()
{
    int i,j,k,n,sum,a,l,ans;
    bool key;
    char ch;
    TEST
    {
        sum=0;
        key=0;
        gets(str);
        l=strlen(str);
        a=0;
        for(i=0; i<l; i++)
        {
            if(str[i]>='0' && str[i]<='9')
                a=a*10+(str[i]-'0');
            if(str[i]==' ' || str[i]=='\n')
            {
       //         pf("%d ",a);
                sum+=a;
                v.pb(a);
                a=0;
            }
        }
  //      pf("%d ",a);
        sum+=a;
        v.pb(a);
   //     pf("sum=%d\n",sum);
        if(sum%2==1)
        {
            pfs("NO");
            v.clear();
            continue;
        }
        l=v.size();
        key = knap(0,l,0,sum/2);
        if(key)
            pfs("YES");
        else pfs("NO");
        v.clear();
    }
    return 0;
}
/*


*/
