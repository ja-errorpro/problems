/*
I_suck_at_programming.
*/
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma comment(linker, "/stack:200000000")
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define GETOUT cout.tie(0);
#define cls cin.sync();
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl;
#define fr(n,l) for(int i=n;i<l;i++)
#define fra(n,a) for(auto n:a)
#define frc(n,l) for(int i=n;i<=l;i++)
#define frx(i,n,l) for(int i=n;i<l;i++)
#define printa(a) fr(0,size(a)){cout<<a[i]<< ' ';}
//sets control,they can control:set,vector(must reserve memory)
#define setu(x,y,v) set_union(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define seti(x,y,v) set_intersection(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define setdu(x,y,v) set_symmetric_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v)) //vector must be sorted.
#define setd(x,y,v) set_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
//string control
#define toupper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define tolower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
//insignificant
#define int long long
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
const signed N = 2e5+10;
ll a[N],b[N],behi[N],front[N];
inline void solve(){
//codeforces 1519D
	ll n;
	cin >> n;
	int m=2*n;
	for(int i=2;i<=m;i+=2){
		cin >> a[i];
	}
	ll ans=0;
	for(int i=2;i<=m;i+=2){
		cin >> b[i];
		ans+=a[i]*b[i];
	}
	frc(1,m) behi[i]=behi[i-1]+a[i]*b[i];
	for(int i=m;i>=1;i--) front[i] = front[i+1] + a[i]*b[i];
	fr(2,m){
		ll t = a[i]*b[i];
		int l=i-1;
		int r=i+1;
		while(l>=1&&r<=m){
			t+=a[l]*b[r] + a[r]*b[l];
			ans = max(ans,t+behi[l-1]+front[r+1]);
			l--;
			r++;
		}
	}
	
	
	
	
	cout << ans  <<endl;





}
signed main(){
	//IO;
	//GETOUT

	int t;
	t=1;
	while(t--)solve();















	return 0;
}
