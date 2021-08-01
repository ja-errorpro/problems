/*
I_suck_at_programming. 
*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(x) x.begin() , x.end()

#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define int long long

const int MOD = 1e9 + 7;
const int N = 1005;
int lcm(int a , int b) {
	return a * b * 1LL / __gcd(a , b);
}
vector<int>p[N];
int calu[N];
 
void ssss() {
	int cur = 1;
	for (int i = 1; i <= 500; i++) {
		cur = lcm(cur,  i);
		calu[i] = cur;
	}
	for (int i = 2; i <= 500; i++) {
		p[i].pb(1);
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				p[i].pb(j);
				if (j * j != i) p[i].pb(i / j);
			}
		}
		sort(all(p[i]));
	}
}
 
void solve() {
	int n;
	cin >> n;
	int ans = 0;
	int ttttt = (n + 1) * 1LL / 2;
	ans = ans + ttttt * 2 % MOD;
	int sum = 0;
	for (int i = 500; i >= 3; i--) {
		if (calu[i] > n) continue;
		int cnt = n / calu[i - 1];
		cnt = (cnt - sum + MOD) % MOD;
		ans = ans + i * 1LL * cnt % MOD;
		ans %= MOD;
		sum += cnt;
		sum %= MOD;
	}
	cout << ans << endl;
} 
 
signed main() { 

  IO
  ssss();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0; 
}