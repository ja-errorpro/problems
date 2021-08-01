/*
I_suck_at_programming.
*/
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define IOFAS ios_base::sync_with_stdio(0); cin.tie(0);
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl;
#define ff first
#define ss second
#define fr(n,l) for(int i=n;i<l;i++)
#define fra(n,a) for(auto n:a)
#define frc(n,l) for(int i=n;i<=l;i++)
#define frx(i,n,l) for(int i=n;i<l;i++)
#define printa(a) fr(0,sizeof(a)/sizeof(a[0])){cout<<a[i]<< ' ';}
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
inline void solve(){

	int n;
	cin >> n;
	vector<vector<int> >v(n);
	int ch=0;
	
	fr(0,n){
		frx(j,0,5){
			int l;
			cin >> l;
			v[i].push_back(l);
		}
	}
	
	if(n==1){
		cout << 1 << endl;
		return;
	}
	
	fr(1,n){
		int ct=0;
		frx(j,0,5){
			if(v[i][j]<v[ch][j]) ct++;
		}
		if(ct>=3) ch=i;
	}
	
	int chk=1;
	fr(0,n){
		int ct=0;
		if(i!=ch){
			frx(j,0,5){
				if(v[ch][j]<v[i][j]) ct++;
			}
			if(ct<3) chk=0;
		}
	}
	if(chk) cout << ch+1 << endl;
	else cout << -1 << endl;
	
	/*int chk=0;
	fr(0,n){
		if(m[i]==n-1){
			cout << i+1 << endl;
			chk=1;
		}
	}
	
	if(!chk) cout << -1 << endl;
*/



}
signed main(){
	IOFAS;


	int t;
	cin >> t;
	while(t--)solve();















	return 0;
}
