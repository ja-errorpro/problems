/*
I_suck_at_programming.
*/
#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma comment(linker, "/stack:200000000")

#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define GETOUT cout.tie(0);
#define gc getchar()
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl;
#define fr(n,l) for(int i=n;i<l;i++)
#define fra(n,a) for(auto n:a)
#define frc(n,l) for(int i=n;i<=l;i++)
#define frx(i,n,l) for(int i=n;i<l;i++)
#define printv(a) fr(0,size(a)){cout<<a[i]<< ' ';}
#define printa(a) fr(0,size(a)/size(a[0])){cout << a[i] << ' ';}
#define getpos(a,v) lower_bound(v.begin(),v.end(),a) - v.begin()
#define arrpos(i,a) distance(a,find(a,a+sizeof(a)/sizeof(a[0]),i))
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
int n;
int c[200010];
vector<int> e[200010];
vector<int> res;
vector<int> sz(200010);
int mn=0x3f3f3f3f;
void dfs(ll now,ll pre){
	sz[now]=1;
	int mx=0;
	for(auto i : e[now]){
		if(i!=pre){
		
		dfs(i,now);
		sz[now]+=sz[i];
		mx=max(mx,sz[i]);
		}
	}
	mx=max(mx,n-sz[now]);
	if(mx<mn){
		mn=mx;
		res.clear();
		res.emplace_back(now);
	}else if(mx==mn) res.emplace_back(now);
	
	
	
	
}
int LIS(std::vector<int>& v){ //Longest Increasing Subsequence Length
    int n=v.size();int dp[n];int ans=0;
    for(int i=0;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
			if(v[i]>=v[j]){dp[i]=max(dp[i],1+dp[j]);ans=max(ans, dp[i]);}
		}
    }
    return ans;
}
inline int nextint(){
	int x=0,w=1;char ch=0;
  	while(ch<'0'||ch>'9'){
    	if(ch == '-')w=-1;
    	ch=getchar();
  	}
  	while(ch>='0'&&ch<='9')x=x*10+(ch-'0'),ch=getchar();
  	return x*w;
}
inline void solve(){


	cin >> n;
	fr(0,n){
		c[i]=0;
		e[i].clear();
	}
	fr(0,n-1){
		int a,b;
		cin  >> a >>b;
		e[a].push_back(b);
		e[b].push_back(a);
	}
	dfs(0,-1);
	int mn = 0x7FFFFFFF;
	int ans = -1;
	/*fr(0,n){
		if(c[i]<mn){
			mn=c[i];
			ans=i;
		}
	}
	cout << ans << endl;*/

	sort(res.begin(),res.end());
	fr(0,res.size()) cout << res[i] << endl;





}
signed main(){
	IO;
	GETOUT;
	int t=1;
	while(t--)solve();
	return 0;
}
