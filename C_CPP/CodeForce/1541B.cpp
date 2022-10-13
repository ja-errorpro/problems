/*
meipu
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define memememem adawdasd
inline void solve(){
	int n;
	cin >> n;
	int a[n];
	int b[2*n+1];
	int count=0;
	for(int i=0;i<=2*n;i++) b[i]=1e8;
	
	for(int i=0;i<n;i++) {
		cin >> a[i] ;
		b[a[i]]=i+1;
	}
	for(int i=3;i<2*n+1;i++){
		
		for(int j=1;j<=sqrt(i);j++){
			
			if(i%j ==0 && i!=j*j){
				
				if(b[j]+b[i/j]==i){
					
					count++;
					
				}
				
			}
		}
		
	}
	
	
	cout << count << endl;
}

signed main(){
	IO;
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}