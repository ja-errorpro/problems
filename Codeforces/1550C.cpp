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
int LIncreaseSetLeng(std::vector<int>& v){
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

bool chk(vector<int> &v){
	int l = LIncreaseSetLeng(v);
	reverse(v.begin(),v.end());
	int l1= LIncreaseSetLeng(v);
	return max(l1,l)<=2;
}

bool chk2(queue<int> q){
	vector<int> v;
     while(!q.empty())
          v.push_back(q.front()), q.pop();
 
     return chk(v);
}

inline void solve(){
	int n;
	cin >> n;
	int a[n]={0};
	fr(0,n) cin >> a[i];
	ll ans=0;
	queue<int> q;
	int i=0,j=0;
	while(j<n){
		q.push(a[j]);
		
		while(!chk2(q)){
			
			ans+=j-i;
			
			q.pop();
			
			i++;
			
		}
		j++;
	}

	cout << ans + (j-i) * (j-i+1) /2 << endl;





}
signed main(){
	//IO;


	int t;
	cin >> t;
	while(t--)solve();















	return 0;
}
