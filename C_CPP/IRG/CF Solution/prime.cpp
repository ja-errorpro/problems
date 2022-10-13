#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long int x;
		cin >> x;
		if(x==1){
			cout << "No" << endl;
			continue;
		}
		long long int sq = sqrt(x+0.5);
		bool ok=1;
		for(int j=2;j<=sq;j++){
			if(x%j==0){
				ok=false;
				break;
			}
		}
		if(ok) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}