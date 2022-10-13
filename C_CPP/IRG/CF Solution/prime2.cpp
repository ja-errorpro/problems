#include<bits/stdc++.h>
using namespace std;
int MAX = 1000000;
int prime[1000009];
int main(){
	int t,x;
	for(int i=2;i<=MAX;i++) prime[i]=1;
	for(int i=2;i<=MAX;i++){
		if(prime[i]==1){
			for(int j=i*2;j<=MAX;j+=i){
				prime[j]=0;
			}
		}
	}
	cin >> t;
	while(t--){
		cin >> x;
		if(prime[x]) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}