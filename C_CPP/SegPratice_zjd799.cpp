/*
~3~
I_suck_at_programming.
-.-
All roads lead to AC.
._.
Haste makes AC.
=.=
*/

#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma comment(linker, "/stack:200000000")

#include<bits/stdc++.h>
//#include<bits/extc++.h>
using namespace std;
template<class T> long long Mod(T a,T b){return ((a%b)+b)%b;}
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define GETOUT cout.tie(0);
#define gc getchar()
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl;
#define fr(bob,n,l) for(int bob=(n);bob<(l);++bob)
#define fra(ns,a) for(auto (ns):a)
#define frc(bot,ns,l) for(int bot=(ns);bot<=(l);++bot)
#define frx(i,ns,l) for(int i=(ns);i<(l);++i)
#define mem(arr,initn) memset(arr,initn,sizeof(arr))
#define ALL(va) (va).begin(),(va).end()
#define ALLa(arr) (arr),(arr)+sizeof((arr))/sizeof((arr)[0])
#define printv(va) {fr(i,0,size((va))){cout<<(va)[i]<< ' ';}cendl;}
#define printa(va) {fr(i,0,sizeof((va))/sizeof((va)[0])){cout << (va)[i] << ' ';}cendl;}
#define getpos(va,v) lower_bound((v).begin(),(v).end(),(va)) - (v).begin()
#define arrpos(i,va) distance((va),find(ALLa((va)),i))
#define pb emplace_back
typedef pair<int,int> pii;
#define fi first
#define se second
#define setu(x,y,v) set_union(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define seti(x,y,v) set_intersection(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define setdu(x,y,v) set_symmetric_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define setd(x,y,v) set_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define toupper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define tolower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
//insignificant
#define int unsigned long long
const int MAX=1e9+7;
const int MOD=998244353;
inline int nextint(){
	int x=0,w=1;char ch=0;
  	while(ch<'0'||ch>'9'){
    	if(ch == '-')w=-1;
    	ch=getchar();
  	}
  	while(ch>='0'&&ch<='9')x=x*10+(ch-'0'),ch=getchar();
  	return x*w;
}
const int MN = 500001;
int nodes[MN*4];
int add[MN*4];
int T[MN];

void update(int l,int r,int ptr){
	if(add[ptr]!=0){
		nodes[ptr]+=add[ptr]*(r-l+1);
		if(l!=r){
			add[ptr*2]+=add[ptr];
			add[ptr*2+1]+=add[ptr];
		}
		add[ptr]=0;
	}
	return;
}

void nodebuild(int l,int r,int ptr){
	if(l==r){
		nodes[ptr]=T[l];
		return;
	}
	int mid = (l+r)/2;
	nodebuild(l,mid,ptr*2);
	nodebuild(mid+1,r,ptr*2+1);
	nodes[ptr]=nodes[ptr*2]+nodes[ptr*2+1];
	return;
}

int query(int l,int r,int L,int R,int ptr){
	update(l,r,ptr);
	if(l==L&&r==R) return nodes[ptr];
	int mid=(l+r)/2;
	if(R<=mid) return query(l,mid,L,R,ptr*2);
	else if(mid<L) return query(mid+1,r,L,R,ptr*2+1);
	else return query(l,mid,L,mid,ptr*2)+query(mid+1,r,mid+1,R,ptr*2+1);
}

void modify(int l,int r,int L,int R,int ptr,int v){
	update(l,r,ptr);
	nodes[ptr]+=v*(R-L+1);
	if(l==L&&r==R){
		if(l!=r){
			add[ptr*2]+=v;
			add[ptr*2+1]+=v;
		}
		return;
	}
	int mid = (l+r)/2;
	if(R<=mid){
		modify(l,mid,L,R,ptr*2,v);
		return;
	}
	else if(mid<L){
		modify(mid+1,r,L,R,ptr*2+1,v);
		return;
	}
	else{
		modify(l,mid,L,mid,ptr*2,v);
		modify(mid+1,r,mid+1,R,ptr*2+1,v);
		return;	
	}
	
}

inline void solve(){

	int n;
	
	memset(nodes,0,sizeof(nodes));
	memset(add,0,sizeof(add));
	cin >> T[1] >> T[2];
	//for(int i=1;i<=n;i++) cin >> T[i];
	nodebuild(1,2,1);
	/*int q;
	cin >> q;
	while(q--){
		int x;int i,j,k;
		cin >> x;
		if(x==1){
			
			cin >>i >> j >> k;
			modify(1,n,i,j,1,k);
		}
		if(x==2){
			cin >> i >> j;
			cout << query(1,n,i,j,1) << endl;	
		}
	}*/
	cout << query(1,2,1,2,1) << endl;







}
signed main(){
	IO;
	GETOUT;
	int t;
	t=1;
	while(t--)solve();
	//cerr << "Time: " << (double)clock() / (double)CLOCKS_PER_SEC << '\n';
	return 0;
}
