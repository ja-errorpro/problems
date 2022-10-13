#include<bits/stdc++.h>
#define endl '\n'


using namespace std;

long long int a[200001];;

int main(){
	long long t;
	cin >> t;
	while(t--){
		long long  n,l,r;
		cin >> n >> l >> r;
		for(long long int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		long long ans=0;
		for(long long int i=0;i<n;i++){
			long long int ll = l-a[i];
			long long int rr = r-a[i];
			long long int lp = lower_bound(a+i+1,a+n,ll)-a;
			long long int rp = upper_bound(a+i+1,a+n,rr)-a;
			ans += rp-lp;
		}
		cout << ans << endl;
		
		
		
		
	}
	return 0;
	
}