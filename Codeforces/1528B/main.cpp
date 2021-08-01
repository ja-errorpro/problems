#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
const int M = 998244353;
typedef long long ll;

ll dp[N];
ll sum[N];
ll cnt[N];
ll g[N];
int pri[N];
int num;
bool isnp[N];
int main() {
    g[1] = 1;
    for(int i = 2; i < N; i++) {
        if(!isnp[i]) {
            cnt[i] = 1;
            g[i] = 2;
            pri[num++] = i;
        }
        for(int j = 0; j < num && 1ll * pri[j] * i < N; j++) {
            isnp[pri[j] * i] = 1;
            if(i % pri[j] == 0) {
                cnt[pri[j] * i] = cnt[i] + 1;
                g[pri[j] * i] = g[i] / (cnt[i] + 1) * (cnt[i] + 2);
                break;
            }
            cnt[pri[j] * i] = 1;
            g[pri[j] * i] = g[i] * 2;
        }
    }
    for(int i = 1; i < N; i++) {
        dp[i] = (sum[i - 1] + g[i]) % M;
        sum[i] = (sum[i - 1] + dp[i]) % M;
    }
    int n;
    while(cin >> n) {
        cout << dp[n] << endl;
    }
}
