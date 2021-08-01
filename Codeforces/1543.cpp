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
#define ff first
#define ss second
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

inline void solve(){
	pair<ll,ll> s;
	cin >> s.ff >> s.ss;
	if(s.ff==s.ss){
		cout << "0 0"<<endl;
		return;
	}
	if(s.ff>0&&s.ss>0&&s.ff==s.ss+1||s.ss==s.ff+1){
		cout << "1 0"<<endl;
		return;
	}
	
	cout << abs(s.ff-s.ss)<<' ';
	ll xxx=abs(s.ff-s.ss);
	cout << min(s.ff%xxx,xxx-(s.ff%xxx))<<endl;
}
signed main(){
	//IO;

	int t;
	cin >> t;
	while(t--)solve();






	return 0;
}
