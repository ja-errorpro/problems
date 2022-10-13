/*
meipu
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define sdawdasd kskdksddg
inline void solve(){
	int length;
	cin >> length;
	cin.sync();
	char s[length+1];
	cin.getline(s,length+2);
	int a[1000]={0};
	//cout << s;
	
	for(int i=0;i<length;i++){
		if(s[i]!=' '){
			if(s[i]>='A'&&s[i]<='Z')a[s[i]+('a'-'Z')]++;
			else a[s[i]]++;
		}
	}
	
	for(int i=0;i<length;i++){
		if(s[i]!=' '){
		
			if(s[i]>='A'&&s[i]<='Z') s[i]+=a[s[i]+('a'-'Z')];
			else s[i]+=a[s[i]];
			}
		if(s[i]>'z' || (s[i]>'Z'&&s[i]<'a')){
			s[i]-=26;
		}
	}
	for(int i=0;i<length;i++){
		cout << s[i];
	}
	cout << endl;
}

signed main(){
	//IO;
	int n;
	cin >> n;
	while(n--)solve();
	return 0;
}