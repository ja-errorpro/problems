/*
I_suck_at_programming.
*/

#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define GETOUT cout.tie(0);
#define cls cin.sync();
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl
#define fr(n,l) for(int i=n;i<l;i++)
#define fra(n,a) for(auto n:a)
#define frc(n,l) for(int i=n;i<=l;i++)
#define frx(i,n,l) for(int i=n;i<l;i++)
#define printv(a) fr(0,size(a)){cout<<a[i]<< ' ';}
#define printa(a) fr(0,sizeof(a)/sizeof(a[0])){cout << a[i] << ' ';}
#define getpos(a,v) lower_bound(v.begin(),v.end(),a) - v.begin()
//sets control,they can control:set,vector(must reserve memory)
#define setu(x,y,v) set_union(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define seti(x,y,v) set_intersection(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define setdu(x,y,v) set_symmetric_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v)) //vector must be sorted.
#define setd(x,y,v) set_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
//string control
#define toupper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define tolower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
//insignificant
//#define int long long
const int MAX=1e9+7;
void dfs(ll v,vector<bool>& vis,vector<int> adj[],ll& dfssum)
{
	dfssum++;
	vis[v] = true;

	for(ll u:adj[v])
	{
		if(!vis[u])
		{
			dfs(u,vis,adj,dfssum);
		}
	}
}
int LIS(vector<int>& v){ //Longest Increasing Subsequence Length
     int n = v.size();
     int dp[n];

     int ans = 0;
     for(int i = 0; i < n; i++){
          dp[i] = 1;
          for(int j = 0; j < i; j++){
               if(v[i] >= v[j]){
                    dp[i]= max(dp[i], 1 + dp[j]);
                    ans = max(ans, dp[i]);
               }
          }
     }
     return ans;
}
int k;
vector<int> g;
vector<bool> chkC,chkD1,chkD2;
inline void solve(int r){
	if(r==k){
		for(int i=0;i<k;i++,cendl)
			frx(j,0,k) cout << (g[i]==j?'Q':'*');
		cendl;
	}
	else{
		for(int c=0;c<k;c++){
			int d1=r+c,d2=r-c+k-1;
			if(!chkC[c]&&!chkD1[d1] && !chkD2[d2]){
				g[r]=c;
				chkC[c]=chkD1[d1]=chkD2[d2]=true;
				solve(r+1);
				g[r]=-1;
				chkC[c]=chkD1[d1]=chkD2[d2]=false;
			}
		}
	}

	





}
signed main(){
	IO;
	GETOUT;

	
	cin >> k;
	g=vector<int>(k,-1);
	chkC.resize(k),chkD1.resize(k*2-1),chkD2=chkD1;
	solve(0);







	return 0;
}
