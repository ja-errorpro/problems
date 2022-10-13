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
inline void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	int MAK=100001;
	vector<vector<int> > b(MAK, vector<int>());
	fr(0,n) {
		cin >> a[i];
		b[a[i]].push_back(i);
	}
	
	int k=0,dif=0;
	fr(0,MAK){
		int l=0,l1=0;
		fra(e,b[i]){
			if(abs(e-k)%2==0){
				l++;
			}else{
				l1++;
			}
		}
		while(l || l1){
			if(dif%2==0){
				if(l==0){
					cout << "NO" << endl;
					return;
				}
				l--;
				dif++;
			}
			else{
				if(l1==0){
					cout << "NO" << endl;
					return;
				}
				l1--;
				dif++;
			}
		}
	}
	
	cout << "YES" << endl;

}
signed main(){
	IO;


	int t;
	cin >> t;
	while(t--)solve();















	return 0;
}
