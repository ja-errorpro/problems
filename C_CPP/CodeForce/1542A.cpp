/*
I_suck_at_programming. 
*/
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl;
#define fr(n,l) for(int i=n;i<l;i++)
#define frc(n,l) for(int i=n;i<=l;i++)
#define printa(a) fr(0,size(a)){cout<<a[i]<< ' ';}
//insignificant
//#define int long long

inline void solve(){
	
	int n;
	cin >> n;
	//multiset<int> a;
	//int a[n*2];
	vector<int> a(2*n);
	int count=0;
	for(int i=0;i<2*n;i++){
		//int c;
		cin >> a[i];
		if(a[i]%2==0) count++;
	}
	//sort(a,a+2*n);
	//multiset<int>::iterator it;
	if(count!=n) cout <<"No" << endl;
	/*for(int it=1;it<2*n;it++){
		if((a[it-1]+a[it])%2==0 ){
			cout << "No" << endl;
			return;
		}
	}*/
	else cout << "Yes" << endl;
	
	
}
signed main(){
//	IO;
	
	
	int t;
	cin >> t;
	while(t--)solve();
	
	
	
	
	
	
	return 0;
}