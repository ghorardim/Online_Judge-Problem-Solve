#include <bits/stdc++.h>
using namespace std;

int a[105][105];
int main()
{
	int n, k;
	cin>>n>>k;

	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(k<=0) continue;
			if(i==j) a[i][j]=1, k--;
			else if(k>1) a[i][j]=1, a[j][i]=1, k-=2;
		}
	}
	if(k>0){
		puts("-1");
		return 0;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<' ';
		}
		puts("");
	}

}
