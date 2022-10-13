/*
meipu
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define sdawdasd kskdksddg

int dp[31][31];
signed main(){
	IO;
	int n,m;
	cin >> n >> m;
	
	memset(dp,0,sizeof(dp));
	dp[0][1]=1;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			int p1=(j-1>=1)?(j-1):n;
			int p2=(j+1<=n)?(j+1):1;
			dp[i][j]=dp[i-1][p1]+dp[i-1][p2];
		}
	}
	cout << dp[m][1] << endl;
	
	return 0;
}