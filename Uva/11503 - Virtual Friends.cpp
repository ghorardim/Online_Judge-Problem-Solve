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
#define sz 1005
#define sz1 200010
#define sz2 25
/******* start my code ********/
char str[sz2];
char str1[sz2];
map<string,int>mp;
int parent[sz1];
int parent_size[sz1];
void initialize(int N)
{
    int i;
    for(i=0; i<N; i++)
        parent[i]=i,parent_size[i]=1;
}
int root(int i)
{
    while(parent[i]!=i)
    {
        parent[i]=parent[parent[i]];
        i=parent[i];
    }
    return i;
}
bool Find(int A,int B)
{
    if( root(A)==root(B) )
        return true;
    else
        return false;
}
void weighted_Union(int A,int B)
{
    int root_A=root(A);
    int root_B=root(B);
  //  pf("here.... %d %d\n",root_A,root_B);
    if(parent_size[root_A]<parent_size[root_B])
    {
        parent[root_A]=parent[root_B];
        parent_size[root_B]+=parent_size[root_A];
    }
    else
    {
        parent[root_B]=parent[root_A];
        parent_size[root_A]+=parent_size[root_B];
    }
}
int main()
{
    int i,j,n,k,h,x,ans,a,b,r,val,y,m,l,mx,z,w,mn,lf,mx1,mn1;
    char ch,ch1;
    bool key=1,flag=1;
    TEST
    {
        sfi(n);
        initialize(2*n+2);
        x=1;
        for(i=0; i<n; i++)
        {
            sfs(str);
            sfs(str1);
            if(mp[str]==0)mp[str]=x++;
            if(mp[str1]==0)mp[str1]=x++;
            if(root(mp[str])!=root(mp[str1]))
            weighted_Union(mp[str],mp[str1]);
          pfi(parent_size[root(mp[str])]);
        }
        mp.clear();
    }
    return 0;
}


/*

*/
