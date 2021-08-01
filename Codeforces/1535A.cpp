#include<bits/stdc++.h>
using namespace std;
signed main(){
	//3 7 9 5
	cin.tie(0);
	int n;
	cin >> n;
	while(n--){
		int a[4];
		for(int i=0;i<4;i++){
			cin >> a[i];
		}
		if(  ((a[0]>a[2]&&a[0]>a[3])&&(a[1]>a[2]&&a[1]>a[3]))  ||  ((a[0]<a[2]&&a[0]<a[3])&&(a[1]<a[2]&&a[1]<a[3])))
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
		
	}
	
	return 0;
} 
