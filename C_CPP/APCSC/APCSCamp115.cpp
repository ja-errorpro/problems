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
const int N = 1e5+5;
inline int nextint(){
	int x=0,w=1;char ch=0;
  	while(ch<'0'||ch>'9'){
    	if(ch == '-')w=-1;
    	ch=getchar();
  	}
  	while(ch>='0'&&ch<='9')x=x*10+(ch-'0'),ch=getchar();
  	return x*w;
}
int a[N],b[N];
ll tem[N];
set<ll> ct;
void query(int l,int r,const int &n){
	if(l>r) return;
	ll s = tem[r]-tem[l-1];
	ct.insert(s);
	int mid = b[l]+(b[r]-b[l])/2;
	mid = upper_bound(b+1,b+n+1,mid) - b;
	if(mid-1<r) query(l,mid-1,n);
	if(mid>l) query(mid,r,n);
}
inline void solve(){
	ct.clear();
	int n,q;
	cin >> n >> q;
	frc(i,1,n) {
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	frc(i,1,n) tem[i]=tem[i-1]+b[i];
	query(1,n,n);
	while(q--){
		int s;
		cin >> s;
		if(ct.count(s)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}








}
signed main(){
	IO;
	GETOUT;
	int t;
	t=1;
	while(t--)solve();
	return 0;
}
