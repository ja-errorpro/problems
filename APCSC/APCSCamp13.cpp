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
list<int> qw[200010];
vector<int> gnum(2000001);
ll n,q;
inline void solve(){
	
	
	
	cin >> n >> q;
	
	fr(0,n){
		int c;
		cin >> c;
		for(int j=0;j<c;j++){
			int t;
			cin >> t;
			gnum[t] = i;
		}
	}
	
	while(q--){
		int x;
		cin >> x;
		switch(x){
			case 1:{
				int c;
				cin >> c;
				qw[gnum[c]].push_back(c);
				break;
			}
			case 2:{
				bool chk=false;
				for(int i=0;i<n;i++){
					if(!qw[i].empty()){
						cout << qw[i].front() << endl;
						qw[i].pop_front();
						chk=true;
						break;
					}
				}
				if(!chk){
					 cout << -1 << endl;
				}
				break;
			}
		}
	}
	fr(0,n) qw[i].clear();
	gnum.clear();




}
signed main(){
	IO;
	//GETOUT

	int t;
	cin >> t;
	while(t--){
		solve();
		fr(0,n) qw[i].clear();
		gnum.clear();
	}















	return 0;
}
