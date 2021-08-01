#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
void solve(){
	int n;
	vector<int> h;
	cin >> n;
	for(int i=0;i<n;i++){
		int c;
		cin >> c;
		h.push_back(c);
	}
	
	int ans=0;
	
	for(int i=1;i<n-1;i++){
		if(h[i]<h[i-1]&&h[i]<h[i+1]) ans++;
	}
	cout << ans << endl;
	
	
	
}


signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}