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
//#define int long long
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
const int MAXN = 1e5+5;
int n,k;
int arr[MAXN];
int brr[MAXN];
multiset<int> s;
void merge(int x,int y){
	int sx = brr[x],sy = brr[y]; 
	s.erase(s.find(x-sx+1));
	s.erase(s.find(sy-y+1));
	brr[sx] = sy;brr[sy] = sx;
	s.insert(sy-sx+1);
}

inline void solve(){

	cin >> n >> k;
	frc(i,1,n){
		cin >> arr[i];
		if(arr[i]==1){
			brr[i] = i;
			s.insert(1);
			if(arr[i-1]==1) merge(i-1,i);
		}
	}
	int ans1=0,ans2=0;
	if(!s.empty()){
		ans1+=*s.rbegin();
		ans2+=*s.begin();
	}
	fr(i,0,k){
		int x;
		cin >> x;
		arr[x]=1;brr[x]=x;
		s.insert(1);
		if(arr[x-1]==1) merge(x-1,x);
		if(arr[x+1]==1) merge(x,x+1);
		ans1+=*s.rbegin();ans2+=*s.begin();
	}
	cout << ans1 << endl << ans2 << endl;








}
signed main(){
	//IO;
	//GETOUT;


	int t;
	t=1;
	while(t--)solve();
	//cerr << "Time: " << (double)clock() / (double)CLOCKS_PER_SEC << '\n';
	return 0;
}
