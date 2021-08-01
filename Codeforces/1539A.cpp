#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
void solve(){
	ll n,x,t;
    cin>>n>>x>>t;
    ll dis=min(n-1,t/x);
    if(dis==0){
        cout<<0<<endl;
        return;
    }
    ll sum=max(0ll,dis*(dis-1)/2)+dis*(n-dis);
    cout<<sum<<endl;
}

signed main(){
	IO;
	int t;
	cin >> t;
	while(t--) solve();
	
	return 0;
}