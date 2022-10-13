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
struct pos{
	int x,y;
};
inline void solve(){
	pos A,B,F;
	cin >> A.x >> A.y;
	cin >> B.x >> B.y;
	cin >> F.x >> F.y;
	int ss=0;
	if(A.x==B.x&&A.x==F.x && max(A.y,B.y)>F.y && min(A.y,B.y)<F.y   ){
		ss+=2;
	}
	if (A.y == B.y && A.y == F.y  && max(A.x,B.x)>F.x && min(A.x,B.x)<F.x ) {
		ss+=2;
	}
	//cout << abs(A.x - B.x) + abs(A.y - B.y) +2<< endl;
	cout << max(A.x,B.x)-min(A.x,B.x)+max(A.y,B.y)-min(A.y,B.y)+ss << endl;






}
signed main(){
	//IO;
	int t;
	cin >> t;
	while(t--)solve();

















	return 0;
}
