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
#define printv(a) fr(0,size(a)){cout<<a[i]<< ' ';}
#define printa(a) fr(0,sizeof(a)/sizeof(a[0])){cout << a[i] << ' ';}
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
void radix_sort(int* l,int *r,bool sign = false){
    if(l == r) return;
    int* ind;
    static vector<int> *v = NULL;
    if (v == NULL) {
        v = new vector<int> [0x10000];
    };
    for(int* i=l;i!=r;i++){v[0xffff&*i].push_back(*i); }
    ind = l;
    for(int i=0;ind != r;i++){for(int j : v[i]) *ind++ = j; v[i].clear(); }
    for(int* i=l;i!=r;i++){v[(0xffff0000ul&*i) >> 16].push_back(*i); }
    ind = l;
    if(sign){
        for(int i=0x8000;i<=0xffff;i++){for(int j : v[i]) *ind++ = j; v[i].clear();}
        for(int i=0;ind != r;i++){for(int j : v[i]) *ind++ = j; v[i].clear();}    
        return;
    }
    for(int i=0;ind != r;i++){for(int j : v[i]) *ind++ = j; v[i].clear();}
}

inline void solve(){








}
signed main(){
	//IO;
	//GETOUT

	int t;
	cin >> t;
	while(t--)solve();















	return 0;
}
