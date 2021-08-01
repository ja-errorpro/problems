/*
meipu
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define mememememem wwwwt
inline void solve(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i=0;i<n;i++){
		if(i%2==0){
			a[i]=i+2;
		}
		else{
			a[i]=i;
		}
	}
	
	if(n%2){
	
		a[n-1]=a[n-2];
		
		a[n-2]=n;
	}
	for(ll i=0;i<n;i++) cout << a[i] << ' ';
	
	
	cout << endl;
	
}

signed main(){
	//IO;
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}