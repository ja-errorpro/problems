#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);

signed main(){
	int n;
	vector<int> dp(1000005,0);
	int mod = 1e9+7;
	cin >> n;
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = i-6; j < i; j++){
            if (j >= 0){
                dp[i] += dp[j];
                dp[i] %= mod;
            }
        }
    }
    cout << dp[n] << "\n";
	
	
	
	return 0;
}