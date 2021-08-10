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
inline void solve(){
 
	int n;
	cin >> n;
	string e,g;
	cin >> e;
	cin >> g;
 
	int esum=0,gsum=0;
 
	
	vector<int> ee(n),gg(n);
	fr(0,n){	
		ee[i]=(e[i]-'0');
		gg[i]=g[i]-'0';
		esum+=ee[i];
		gsum+=gg[i];
	}
	//cout << esum << ' ' << gsum << endl;
	if(esum==0){
		cout << gsum << endl;
		return;
	}
	if(gsum==0){
		cout << 0 << endl;
		return;
	}
	int ans=0;
	fr(0,n){
		if(gg[i]==1){
			if(ee[i]==0){
				ans++;
				ee[i]=-1;
				continue;
			}
			if(i!=0&&ee[i-1]==1){
				ans++;
				ee[i-1]=-1;
				continue;
			}
			if(i!=n-1&&ee[i+1]==1){
				ans++;
				ee[i+1]=-1;
				continue;
			}
			
		}
	}
	cout << ans << endl;
	/*
		111	1111
		000 0000
		101 0000
			0111
	*/
}
signed main(){
	//IO;
	//GETOUT
 
	int t;
	cin >> t;
	while(t--)solve();
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	return 0;
}