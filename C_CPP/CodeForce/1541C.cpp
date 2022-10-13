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
	
	ll a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	
	sort(a,a+n);
	ll ans=0,sum=0;
	for(int i=2;i<n;i++){
		sum+=a[i-2];
		ans-=a[i]*(i-1);
		ans+=sum;
	}
	cout << ans << endl;
}

signed main(){
	//IO;
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}