#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
int q(int a, int b) {
	int ans = 1; 
	while (b) {
		if (b & 1) ans = ans * a; b >>= 1; a = a * a;


	} 
	return ans;
}
inline void solve(){
	int n;
	cin >> n;
	int ans=0;
	while (n) {
        n >>= 1;
        ++ans;
    }
    cout << q(2, ans - 1) - 1 << "\n";
	
}

signed main(){
	IO;
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}