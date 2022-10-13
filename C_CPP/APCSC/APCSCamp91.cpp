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
#define fr(n,k,l) for(int (n)=(k);(n)<(l);(n)++)
#define fra(n,a) for(auto n:a)
#define frc(n,l) for(int i=n;i<=l;i++)
#define frx(i,n,l) for(int i=n;i<l;i++)
#define printv(a) fr(0,size(a)){cout<<a[i]<< ' ';}
#define printa(a) fr(0,size(a)/size(a[0])){cout << a[i] << ' ';}
#define mem(arr,val) memset((arr),(val),sizeof((arr)))
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

int n;
int trapcnt;
int grap[1010][1010];
bool visited[2][1010][1010];
int lr[8]={1,2,1,2,-1,-2,-1,-2};
int ud[8]={2,1,-2,-1,2,1,-2,-1};

struct pos{
	int x,y;
	bool operator==(const pos& p){
		return x==p.x&&y==p.y;
	}
};
queue<pos> Q[2];
bool ok(int x,int y,int qi){
	return x>=1 && x<=n && y>=1 && y<=n && (visited[qi][x][y]==false);
}

bool bfs(int qi){
	queue<pos> &q = Q[qi];
	int sz = q.size();
	while(sz--){
		pos p = q.front();q.pop();
		fr(i,0,8){
			int nx = p.x+lr[i],ny = p.y+ud[i];
			if(ok(nx,ny,qi)){
				visited[qi][nx][ny] = true;
				q.push({nx,ny});
				if(visited[1^qi][nx][ny]) return true;
			}
		}
	}
	return false;
}

inline void solve(){

	mem(visited,false);
	cin >> n;
	pos s,e;
	cin >> s.x >> s.y;
	cin >> e.x >> e.y;
	if(s==e){
		cout << 0 <<endl;return;
	}
	cin >> trapcnt;
	fr(i,0,trapcnt){
		int x,y;
		cin >> x >> y;
		visited[0][x][y] = true;
		visited[1][x][y] = true;
	}
	
	while(!Q[0].empty()) Q[0].pop();
	while(!Q[1].empty()) Q[1].pop();
	
	Q[0].push(s),visited[0][s.x][s.y] = true;
	Q[1].push(e),visited[1][e.x][e.y] = true;
	
	int step=0;
	while(!Q[0].empty()||!Q[1].empty()){
		bool tmp = bfs(0);
		step++;
		if(tmp){
			cout << step << endl;
			return;
		}
		tmp = bfs(1),++step;
		if(tmp){
			cout << step << endl;
			return;
		}
	}
	cout << -1 << endl;






}
signed main(){
	//IO;
	//GETOUT;
	int t;
	t=1;
	while(t--)solve();
	return 0;
}
