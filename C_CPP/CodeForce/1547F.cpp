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
vector<int> prime;
const int MAXX=1e6;
bool ns[MAXX+1];
void factor() {
    for(ll i=2;i<=MAXX;i++) if(!ns[i]){
        for(ll j=i*i;j<=MAXX;j+=i) ns[j]=1;
        prime.push_back(i);
    }
};

inline void solve(){
	int n;
	int ans=0;
	cin >> n;
	int a[n]={0};
	fr(0,n) cin >> a[i];
	int s=a[0],mx=0;
	
	fr(1,n) s=__gcd(s,a[i]);
	fr(0,n) a[i]/=s,mx=max(mx,a[i]);
	
	for(auto p:prime){
		if(p>mx) break;
		
        int cnt=0,mxs=0;
        bool check=0;
        
        fr(0,2*n){
            if(!check&&a[i%n]%p==0) check=1;
            if(check){
                cnt++;
                if(a[i%n]%p) mxs=max(mxs,cnt), cnt=check=0;
            }
        }
            ans=max(ans,mxs);
		
		
	}
cout << ans << endl;


}
signed main(){
	IO;
	factor();

	int t;
	cin >> t;
	while(t--)solve();















	return 0;
}
