#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
void solve(){
	double A,B,L,P;
	cin >> A >> B >> L >> P;
	
	double distance = L;
	vector<double> sumdis;
	ll count=0;
	while(distance>0){
		if(count==0){
			
			sumdis.push_back();
			distance -= A+B;
			count++;
			
		}
		else{
			if(count%2)
				sumdis.push_back();
			else
				sumdis.push_back();
				
			count++;
		
			distance -=A+B;
		}
	}
	for(int i=0;i<sumdis.size();i++) cout << sumdis[i] << endl;
	
	
}
signed main(){
	//IO;
	int t;
	cin >> t;
	while(t--) solve();
	
	return 0;
}