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
	int k,m,n;
	cin >> k >> n >> m;
	int a[n],b[m];
	fr(0,n){
		cin >> a[i];
	}
	fr(0,m){
		cin >> b[i];
	}
	
	int ans=0,i=0,j=0,c=0;
	vector<int> v;
	while(i<n||j<m){
		if(i<n&&j<m){
			v.push_back(min(a[i],b[j]));
		if(a[i]<b[j]) i++;
		else j++;
			
		}
		else if(i<n){
			v.push_back(a[i]);
			i++;
		}
		else{
			v.push_back(b[j]);
			j++;
		}
		
		
		
	}
	fra(i,v){
		if(i==0)
			c++;
		else{
			if(i<=c+k)continue;
			else ans=-1;
		}
	}
	if(ans==-1) cout << -1 << endl;
	else{
		fra(i,v)cout << i <<' ';
		cout << endl;
	}


}
signed main(){
	IO;

	int t;
	cin >> t;
	while(t--)solve();
















	return 0;
}
