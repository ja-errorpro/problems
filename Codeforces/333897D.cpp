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
	ll a[n],b[n];
	for(int i=0;i<n;i++) cin>> a[i];
	for(int i=0;i<n;i++) cin>> b[i];
	
	sort(a,a+n);
	sort(b,b+n);
	ll min=0;
	for(int i=0;i<n;i++){
		min+=a[i]*b[i];
	}
	ll max=0;
	sort(a,a+n,greater<int>() );
	for(int i=0;i<n;i++){
		max+=a[i]*b[i];
	}
	cout << min <<' '<< max << endl;
}

signed main(){
	//IO;
	int q;
	cin >> q;
	while(q--)solve();
	return 0;
}