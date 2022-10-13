
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

inline void solve(){
	
	
	
	
	
	
	
	
}
signed main(){
	IO;
	
	
	
	ll n;
	ll a[3]={0};
	cin >> n;
	while(n--){
		int i;
		cin >> i;
		a[i-1]++; 
	}
	int maxi=0,maxc=0;
	fr(0,3){
		if(maxc<a[i]){
			maxc=a[i];
			maxi = i;
		}
	}
	
	//cout << maxi+1;
	int ans=0;
	fr(0,3){
		if(i!=maxi){
			ans+=a[i];
		}
	}
	cout << ans;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}