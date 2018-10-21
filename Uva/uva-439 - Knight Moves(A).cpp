#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<stack>
#include<queue>
#include<map>
#include<string.h>
#include<vector>
#include<bitset>
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
#define sz 65
#define sz1 4
#define sz2 10000

/******   start your code   *******/
class cell
{
public:
    int x;
    int y;
};
vector<cell>board[sz];
queue<cell>q;
int fx[]= {2,2,-2,-2,1,1,-1,-1};
int fy[]= {1,-1,1,-1,2,-2,2,-2};
int arr[sz][sz];
bool check[sz][sz]={false};
int main()
{
    int i,j,k,val,ln,moves[sz2],turn,ll,jj;
    val=0;
    cell obj,fst,ed,rep,cc;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            arr[i][j]=val++;
            for(k=0; k<8; k++)
            {
                if((fx[k]+j)>=0 && (fx[k]+j)<8 && (fy[k]+i)>=0 && (fy[k]+i)<8)
                {
                    obj.x=fx[k]+j;
                    obj.y=fy[k]+i;
                    board[arr[i][j]].push_back(obj);
                }
            }
        }
    }
    char ch1[sz1];
    char ch2[sz1];
    while(sf("%s%s",ch1,ch2)!=EOF)
    {
        turn=moves[1]=0;
        fst.x=ch1[0]-'a';
        fst.y=ch1[1]-'1';
        ed.x=ch2[0]-'a';
        ed.y=ch2[1]-'1';
        q.push(fst);
        check[fst.y][fst.x]=true;
        ll=1;
        jj=2;
        while(!q.empty())
        {
            obj=q.front();
            turn++;
            if(obj.x==ed.x && obj.y==ed.y)
            {

                break;
            }
            else
            {
                ln=board[arr[obj.y][obj.x]].size();
                for(i=0; i<ln; i++)
                {
                    cc=board[arr[obj.y][obj.x]][i];
                    if(check[cc.y][cc.x]==false)
                    {
                        q.push(board[arr[obj.y][obj.x]][i]);
                        check[cc.y][cc.x]=true;
                        moves[jj++]=moves[ll]+1;
                    }
                }
                q.pop();
            }
            ll++;
        }
        pf("To get from %s to %s takes %d knight moves.\n",ch1,ch2,moves[ll]);
        for(i=0; i<8; i++)
        {
            ln=board[i].size();
            for(j=0; j<8; j++)
            {
                check[i][j]=false;
            }
        }
        for(i=0;i<65;i++)moves[i]=0;
        ln=q.size();
        for(i=0;i<ln;i++)q.pop();
    }
    return 0;
}

