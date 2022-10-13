/*
meipu
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define sdawdasd kskdksddg
inline void solve(){
	
	int n;
	cin >> n;
	ll d[n];
	cin >> d[0];
	for(int i=1;i<n;i++){
	cin >> d[i];
	d[i-1]=abs(d[i]-d[i-1]);
	}
	ll ans = d[0];
	for(int i=1;ans>1 && i<n-1;i++){
		ans = __gcd(ans,d[i]);
	}
	cout << ans << endl;
	
	
}
signed main(){
	IO;
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}