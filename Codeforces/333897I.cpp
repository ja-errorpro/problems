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
	
	ll n;
	cin >> n;
	if(n==1){
		cout << 0 << endl;
		return;
	}
	double count=log2(n);
	if(pow(2,2*count) > n ){
		count*=2;
		count=floor(count);
		count--;
		
	}
	else{
		count*=2;
		count=ceil(count);
	}
	
	
	cout << count << endl;
}

signed main(){
	//IO;
	int q;
	cin >> q;
	while(q--)solve();
	return 0;
}