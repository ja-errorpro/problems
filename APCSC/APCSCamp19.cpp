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
const int MAXN=300000;
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
stack<int> stk;

int N;
int a[MAXN+1];
int ls[MAXN+1];
int rs[MAXN+1]; 
long long ans;
inline void solve(){

	cin >> N;
	frc(1,N) cin >> a[i];
	
	frc(1,N){
		while (stk.size() && a[i] <= a[stk.top()]) {
			stk.pop();
		}
		if (stk.size()) {
			ls[i] = stk.top();
		} else {
			ls[i] = 0; 
		}
		stk.push(i); 
	}
	while (stk.size()) stk.pop();
	
	for (int i = N; i >= 1; i--) {
		while (stk.size() && a[i] <= a[stk.top()])stk.pop();
		
		
		if (stk.size()) rs[i] = stk.top();
		else rs[i] = N+1; 
		
		
		
		stk.push(i); 
	}
	for (int i = 1; i <= N; i++) {
		ans = max(ans, (long long) a[i] * (rs[i] - ls[i] - 1));
	}
	cout << ans << '\n';





}
signed main(){
	IO;
	//GETOUT

	int t;
	t=1;
	while(t--)solve();















	return 0;
}
