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
#define int long long
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
int n,m[10],a[10],b[10],num,t,sz;
int ans;
queue<int> bfs;
unordered_set<int> v;
void come(){
	int k = bfs.front();
	bfs.pop();
	fr(i,0,n){
		b[i] = k & 63;
		k >>= 6;
	}
}
void goe(){
	int k = 0;
	for (int i = n - 1; i >= 0;--i){
		if(a[i]<0||a[i]>m[i])
			return;
		k <<= 6;
		k |= a[i];
	}
	if(v.find(k)!=v.end())
		return;
	v.insert(k);
	bfs.push(k);
}
inline void solve(){

	cin >> n;
	int gd,maxx=0;
	fr(i,0,n){
		cin >> m[i];
		if(i==0) gd = m[0];
		else gd = __gcd(gd,m[i]);
		maxx = max(maxx,m[i]);
	}
	cin >> t;
	if (t <= maxx && t % gd == 0) {
        goe();
        while (!bfs.empty()) {
            ++ans;
            sz = bfs.size();
            while (sz--) {
                come();
                for (int i = 0 ; i < n ; ++i) {
                    if (b[i] == t) {
						cout << ans - 1 << endl;
						return;
                    }
                    a[i] = b[i];
                }
                for (int i = 0 ; i < n ; ++i) {
                    a[i] = m[i];
                    goe();
                    a[i] = 0;
                    goe();
                    a[i] = b[i];
                }
                for (int i = 0 ; i < n ; ++i)
                    for (int j = 0 ; j < n ; ++j) {
                        if (i == j) continue;
                        a[i] = max(b[i] + b[j] - m[j], 0LL);
                        a[j] = min(b[i] + b[j], m[j]);
                        goe();
                        a[i] = b[i], a[j] = b[j];
                    }
            }
        }
    }
	cout << -1 << endl;
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
