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
template<class T> long long Mod(T a,T b){return ((a%b)+b)%b;}
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define GETOUT cout.tie(0);
#define gc getchar()
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl;
#define fr(bob,n,l) for(int bob=n;bob<l;bob++)
#define fra(i,a) for(auto i:a)
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
const int MAX=1e9+9;

inline int nextint(){
	int x=0,w=1;char ch=0;
  	while(ch<'0'||ch>'9'){
    	if(ch == '-')w=-1;
    	ch=getchar();
  	}
  	while(ch>='0'&&ch<='9')x=x*10+(ch-'0'),ch=getchar();
  	return x*w;
}
vector<ll> fib;
ll now;
ll F(int n){
	if(n<=now){
		return fib[n] % MAX;
	}
	else{
		int x = now-1;
		frc(i,now+1,n){
			fib[i] = (fib[now]+fib[x])%MAX;
			x = now;
			now = i;
		}
		return fib[n] % MAX;
	}
}
inline void solve(){

	ll a,b;
	cin >> a >> b;
	ll p = pow(a,b);
	cout << p << endl;
	if(p>now){
		fib.reserve(p+1);
		fib.resize(p+1);
	}
	cout << F(p-1) << endl;









}
signed main(){
	//IO;
	//GETOUT;
	fib.resize(101);
	fib[0]=1;
	fib[1]=1;
	now = 1;
	ll *test = new ll;
	*test = F(100);
	ll t;
	cin >> t;
	while(t--)solve();
	return 0;
}
