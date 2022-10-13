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
#define int long long
const int MAX=1e9+7;

inline int nextint(){
	int x=0,w=1;char ch=0;
  	while(ch<'0'||ch>'9'){
    	if(ch == '-')w=-1;
    	ch=getchar();
  	}
  	while(ch>='0'&&ch<='9')x=x*10+(ch-'0'),ch=getchar();
  	return x*w;
}

int a[100100],b[100100],c[100100];
int now[100100];
int chk(int M,int n){
	fr(i,0,n) now[i]=a[i]+b[i]*M;
	sort(now,now+n);
	int *pos = upper_bound(now,now+n,c[0]);
	if(pos == now+n) return 0;
	int pp = pos-now;
	int ress = 0;
	fr(i,0,n){
		if(pp>=n) break;
		while(now[pp]<=c[i]&&pp<n) pp++;
		if(pp>=n) break;
		pp++;ress++;
	}
	return ress;
}
inline void solve(){
	mem(a,0);
	mem(b,0);
	mem(c,0);
	mem(now,0);
	int n,k;
	cin >> n >> k;
	fr(i,0,n){
		cin >> a[i] >> b[i];
	}
	fr(i,0,n) cin >> c[i];
	sort(c,c+n);
	int l=0,r=MAX,mid;
	int ans=-1;
	while(l<=r){
		mid = l+(r-l)/2;
		int res = chk(mid,n);
		if(res<k) l=mid+1;
		else{
			ans = mid;
			r=mid-1;
		}
		mid=l+(r-l)/2;
	}
	cout << ans << endl;








}
signed main(){
	//IO;
	//GETOUT;
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}
