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
#define fr(n,l) for(int i=n;i<l;i++)
#define fra(n,a) for(auto n:a)
#define frc(n,l) for(int i=n;i<=l;i++)
#define frx(i,n,l) for(int i=n;i<l;i++)
#define printv(a) fr(0,size(a)){cout<<a[i]<< ' ';}
#define printa(a) fr(0,size(a)/size(a[0])){cout << a[i] << ' ';}
#define getpos(a,v) lower_bound(v.begin(),v.end(),a) - v.begin()
#define arrpos(i,a) distance(a,find(a,a+sizeof(a)/sizeof(a[0]),i))
#define mem(ara,count) memset(ara,count,sizeof(ara))
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

inline int nextint(){
	int x=0,w=1;char ch=0;
  	while(ch<'0'||ch>'9'){
    	if(ch == '-')w=-1;
    	ch=getchar();
  	}
  	while(ch>='0'&&ch<='9')x=x*10+(ch-'0'),ch=getchar();
  	return x*w;
}
inline void solve(){


	int n;
	cin >> n;
	string s;
	cin >> s;
	int blankcnt = 0;
	fr(0,n){
		if(s[i]=='?') blankcnt++;
	}
	if(blankcnt==n){
		bool cs=true;
		fr(0,n){
			if(cs) s[i]='B';
			else s[i]='R';
			cs=!cs;
		}
		
	}
	else{
		while(1){
		
		int cnt=0;
		fr(0,n){
			if(s[i]!='?'){
				if(i!=0){
					if(s[i-1]=='?'){
						if(s[i]=='R') s[i-1]='B';
						else s[i-1] = 'R';
					}
				}
				if(i!=n-1){
					if(s[i+1]=='?'){
						if(s[i]=='R') s[i+1]='B';
						else s[i+1] = 'R';
					}
				}
			}
			else cnt++;
		}
		if(cnt==0) break;
		}
	}
	cout << s << endl;







}
signed main(){
	//IO;
	//GETOUT;
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}
