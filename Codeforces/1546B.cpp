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
#define fr(n,l) for(int i=n;i<l;i++)
#define fra(n,a) for(auto i:a)
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
string s[100005];
inline void solve(){
	
	ll n,m;
	cin >> n >> m;
	
	map<ll,ll> a[30000];
	fr(0,2*n-1) cin >> s[i];
	fr(0,2*n-1){
		frx(j,0,m) a[s[i][j]][j]++;
	}
	fr(0,n*2-1){
		bool chk = true;
		frx(j,0,m){
			chk &= ((a[s[i][j]][j] &1) == 1);
		}
		if(chk){
			cout << s[i] << endl;
			break;
		}
	}
	fr(0,2*n-1) s[i]=" ";
	
	
	
	
	
	cout.flush();






}
signed main(){
	//IO;



	int t;
	cin >> t;
	while(t--) solve();














	return 0;
}