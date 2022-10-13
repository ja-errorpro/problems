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
#define fr(bob,n,l) for(int bob=n;bob<l;bob++)
#define fra(n,a) for(auto n:a)
#define frc(bot,n,l) for(int bot=n;bot<=l;bot++)
#define frx(i,n,l) for(int i=n;i<l;i++)
#define mem(arr,initn) memset(arr,initn,sizeof(arr))
#define printv(a) fr(0,size(a)){cout<<a[i]<< ' ';}
#define printa(a) fr(0,size(a)/size(a[0])){cout << a[i] << ' ';}
#define getpos(a,v) lower_bound(v.begin(),v.end(),a) - v.begin()
#define arrpos(i,a) distance(a,find(a,a+sizeof(a)/sizeof(a[0]),i))
#define pb push_back
#define pii pair<int,int>
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
const int N = 2e5+5;
inline int nextint(){
	int x=0,w=1;char ch=0;
  	while(ch<'0'||ch>'9'){
    	if(ch == '-')w=-1;
    	ch=getchar();
  	}
  	while(ch>='0'&&ch<='9')x=x*10+(ch-'0'),ch=getchar();
  	return x*w;
}
int n;
int dj[N]={N+1};
int teamed1[N];
int teamed2[N];
int no1[N];
int no2[N];
void init(int x){
	mem(teamed1,0);
	mem(teamed2,0);
	mem(no1,-1);
	mem(no2,-1);
	fr(i,0,n){
		dj[i]=i;
	}
}
int query(int x){
	if(dj[x]==x) return x;
	else return dj[x]=query(dj[x]);
}
void merge(int x,int y){
	int xx=query(x);
	int yy = query(y);
	dj[xx]=yy;
}
inline void solve(){


	
	cin >> n;
	init(n);
	int cmd,u,v;
	while(cin >> cmd >> u >> v){
		if(cmd == 0&&u==0&&v==0) break;
		if(cmd==1){
			if((!teamed1[u]||!teamed2[u]) &&(!teamed1[v]||!teamed2[v]) && no1 ){
				merge(u,v);
			}
			else{
				cout << -1 << endl;
			}
		}
		else if(cmd == 2){
			
		}
		else if(cmd == 3){
			
		}
		else if(cmd==4){
			
		}
	}









}
signed main(){
	//IO;
	//GETOUT;
	int t;
	t=1;
	while(t--)solve();
	return 0;
}
