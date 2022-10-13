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
//#define int long long
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
struct segment_tree{
    int seg[400015]={},loc[400015]={};
    void change(int l,int r,int i,int pos,int value){
        if (l==r){
            seg[i]=value;
            loc[i]=pos;
            return;
        }
        int mid=(l+r)/2;
        if (pos<=mid) change(l,mid,2*i,pos,value);
        else change(mid+1,r,2*i+1,pos,value);
        if (seg[2*i]>=seg[2*i+1]){
            seg[i]=seg[2*i+1];
            loc[i]=loc[2*i+1];
        }
        else {
            seg[i]=seg[2*i];
            loc[i]=loc[2*i];
        }
    }
    pair<int,int> query(int l,int r,int i,int le,int rr){
        if (le<=l&&rr>=r) return {seg[i],loc[i]};
        
        int mid=(l+r)/2;
        
        if (rr<=mid) return query(l,mid,2*i,le,rr);
        
        else if (le>mid) return query(mid+1,r,2*i+1,le,rr);
        
        else return min(query(l,mid,2*i,le,mid),query(mid+1,r,2*i+1,mid+1,rr));
    }
}seg;

int ans=0,n,a[100015];

void Merge(int l,int r){
    if (l>r) return;
    if (l==r){
        ans+=a[l];
        ans%=MAX;
        return;
    }
    pair<int,int> mx=seg.query(1,n,1,l,r);
    ans+=mx.first*(mx.second-l+1)%MAX*(r-mx.second+1)%MAX;
    Merge(l,mx.second-1);
    Merge(mx.second+1,r);
}
inline void solve(){

	
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
        seg.change(1,n,1,i,a[i]);
    }
    
    Merge(1LL,n);
    
    cout<<ans<<'\n';










}
signed main(){
	//IO;
	//GETOUT;
	int t;
	t=1;
	while(t--)solve();
	return 0;
}
