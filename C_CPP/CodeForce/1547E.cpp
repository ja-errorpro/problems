/*
I_suck_at_programming.
*/
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl;
#define fr(n,l) for(ll i=n;i<l;i++)
#define fra(n,a) for(auto i:a)
#define frc(n,l) for(ll i=n;i<=l;i++)
#define frx(i,n,l) for(ll i=n;i<l;i++)
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
//#define int long long
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
inline void solve(){
	ll n,k;
	
	const ll MAXX = 1e18;
	
	cin >> n >> k;
	
	vector<ll> ConsP(k) , t(k);
	
	map<ll , pair<ll,ll> >vis;
	
	fr (0,k) cin >> ConsP[i];
	
	fr (0,k) cin >> t[i];
	
	vector<ll> T(n + 2 , MAXX) , T2(n +2 , MAXX);
	
	fr (0,k) {
		
		T[ConsP[i]] = t[i] - ConsP[i];
		
		T2[ConsP[i]] = t[i] + ConsP[i];
		
	}
	
	frc (1,n) {
		
		T[i] = min(T[i] , T[i - 1]);
		
	}
	
	for (ll i = n ; i>= 1; i--) {
		
		T2[i] = min(T2[i] , T2[i + 1]);
		
	}
	
	
	frc (1,n) {
		
		cout << min(T[i] + i , T2[i] - i) << ' ';
		
	}
	
	cout << endl;
	




}
signed main(){
	//IO;

	int t;
	cin >> t;
	while(t--) solve();
















	return 0;
}
