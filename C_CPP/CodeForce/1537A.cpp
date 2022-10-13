#include<bits/stdc++.h>

#define endl '\n'
using namespace std;

signed main(){
	int t;
	cin >> t;
	while(t--){
		double avg=0,sum=0;
		int n;
		cin >> n;
		double a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			sum += a[i];
		}
		avg = sum / n;
		if(avg == 1){
			cout << "0" << endl;
			continue;
		}
		//cout<< avg << endl;
		double cnt = (avg-1) * n;
		if(cnt >=0){
		
		cout << cnt <<  endl;
		}
		else{
			cout << 1 << endl;
		}
		
	
	}
	return 0;
}