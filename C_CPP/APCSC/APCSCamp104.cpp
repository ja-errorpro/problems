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
void dfs(ll v,vector<bool>& vis,vector<int> adj[],ll& dfssum){
	dfssum++;
	vis[v] = true;
	for(ll u:adj[v]){
		if(!vis[u])dfs(u,vis,adj,dfssum);
	}
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
int cnt=0,rs=0;
typedef pair<vector<int>,int> ds;
ds inmerge(ds a,ds b){
	vector<int> r;int cnt = a.second+b.second;
	
	auto &aa = a.first,&bb=b.first;
	for(int i=0,j=0;i<aa.size()||j<bb.size();){
		if(i<aa.size()&&(j==bb.size()||aa[i]<=bb[j])){
			r.push_back(aa[i++]),cnt+=j;
			rs+=aa[i-1];
		}
		else r.push_back(bb[j++]),rs+=bb[j-1];
	}
	return {r,cnt};
}
ds mergesort(vector<int> v){
	
	if(v.size()==1) return {v,0};
	//rs++;
	//cout << rs <<endl;
	vector<int> l,r;
	fr(0,v.size()){
		(i<v.size()/2?l:r).push_back(v[i]);
		
	}
	return inmerge(mergesort(l),mergesort(r));
}
inline void solve(){

	int n;
	cin >>n;
	vector<int> a(n);
	fr(0,n) cin >> a[i];
	ds res = mergesort(a);
	fr(0,res.first.size()) cout << res.first[i] << ' ';
	cendl;
	cout << res.second << endl;
	cout << rs << endl;








}
signed main(){
	//IO;
	//GETOUT;
	int t;
	t=1;
	while(t--)solve();
	return 0;
}
