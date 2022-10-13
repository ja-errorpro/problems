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
#define frc(n,l) for(int i=n;i<=l;i++)
#define printa(a) fr(0,size(a)){cout<<a[i]<< ' ';}
//sets control,they can control:set,vector(must reserve memory)
#define setu(x,y,v) set_union(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define seti(x,y,v) set_intersection(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define setdu(x,y,v) set_symmetric_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v)) //vector must be sorted.
#define setd(x,y,v) set_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
//insignificant
//#define int long long

inline void solve(){
	
	
	
	
	
	
	
	
}
signed main(){
	IO;
	
	
	int t;
	cin >> t;
	int ans=0;
	while(t--){
		string s;
		cin >> s;
		if(s=="++X"||s=="X++"){
			ans++;
		}
		else{
			ans--;
		}
	}
	cout << ans << endl;
	
	
	
	
	
	return 0;
}