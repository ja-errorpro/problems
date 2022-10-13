/*
meipu
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define sdawdasd kskdksddg

signed main(){
	//IO;
	multiset<string> sss;
	int n;
	cin >> n;
	string ss;
	while(n--){
		string s;
		
		cin >> s;
		multiset<string>::iterator it = sss.find(ss);
		if(it!=sss.end()){
			cout << *it << endl;
		}
		else{
			cout << -1 << endl;
		}
		ss = s;
		sss.insert(s);
		
	}
	
	
	return 0;
}