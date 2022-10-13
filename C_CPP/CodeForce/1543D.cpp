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
int t;

inline void solve(){
	int n,k;
	cin >> n >> k;
	ll a[n+5]={0,1,3,1};
	ll x=2,y=3;
	
	
	
	
	for(ll i=0;i<n;i++){
		if(i<=3){
			cout << a[i]<<endl;
		}else{
			ll s=i;
			while(s%2==0)s/=2;
			if(s==1){
				x*=2;
				
				y+=x;
				
				cout << y << endl;
				
				a[i]=y;
			}else{
				
				a[i]=a[i-x];
				
				cout << a[i]<<endl;
				
			}
		}
		ll an;
		cin >> an;
		if(an==1)break;
	}
	
	





}
signed main(){
	//IO;
	
	cin >> t;
	
	while(t>0){
	solve();
	t--;
	}

	















	return 0;
}
