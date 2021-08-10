#include <bits/stdc++.h>
using namespace std;

const int MAXN = 300000;

stack<int> stk;

int N;
int a[MAXN+1];
int ls[MAXN+1]; // 左邊第一個比我小的位置
int rs[MAXN+1]; // 右邊第一個比我小的位置
long long ans;

signed main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= N; i++) {
		while (stk.size() && a[i] <= a[stk.top()]) {
			stk.pop();
		}
		if (stk.size()) {
			ls[i] = stk.top();
		} else {
			ls[i] = 0; // 左邊沒有比我小的數值
		}
		stk.push(i); // 將自己加入 stack 中
	}
	while (stk.size()) stk.pop(); // 記得清空 stack
	for (int i = N; i >= 1; i--) {
		while (stk.size() && a[i] <= a[stk.top()]) {
			stk.pop();
		}
		if (stk.size()) {
			rs[i] = stk.top();
		} else {
			rs[i] = N+1; // 右邊沒有比我小的數值
		}
		stk.push(i); // 將自己加入 stack 中
	}
	for (int i = 1; i <= N; i++) {
		ans = max(ans, (long long) a[i] * (rs[i] - ls[i] - 1));
	}
	cout << ans << '\n';
	return 0;
}