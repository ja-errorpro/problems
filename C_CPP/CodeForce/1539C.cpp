#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
bool cmp(ll i,ll j){
	return (i>j);
}
signed main(){
	IO;
	ll n,k,x;
	cin >> n >> k >> x;
	ll a[n];
	for(ll i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	vector<ll> v;
	for(ll i=1;i<n;i++){
		if(a[i]-a[i-1]>x) v.push_back((a[i]-a[i-1])-x);
	}
	
	
	sort(v.begin(),v.end(),cmp);
	
	while(v.size()){
		if(v[v.size()-1]<=k){
			k-=v[v.size()-1];
			v.pop_back();
		}else{
			break;
		}
	}
	
	cout << v.size()+1 << endl;
	return 0;
}