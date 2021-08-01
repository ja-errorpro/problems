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
inline void solve(){
	
	int n,a,b;
	cin >> n >> a >> b;
	//int acount,bcount;
	string s;
	cin >> s;
	
	int ans = 0,sum=0;
	for(int i = 0;i < n ;++i)
        ans += a + b;
    for(int i = 0;i < s.size() ;++i){
        if(i < s.size() - 1 && s[i] != s[i + 1]){
            int j = i + 1;
            while(j < s.size() - 1 && s[j] == s[j + 1])
                ++j;
            sum += (j - i) * a + b;
            s.erase(s.begin() + i + 1, s.begin() + j + 1);
        }
    }
    sum += (s.size() * a) + b;
    cout << max(ans,sum) << endl;
	

}
signed main(){
	//IO;


	int t;
	cin >> t;
	while(t--)solve();















	return 0;
}
