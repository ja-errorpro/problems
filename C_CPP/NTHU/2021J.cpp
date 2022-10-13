/*
meipu
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define sdawdasd kskdksddg

inline int pal(const string& s,int left,int right){
	
	while(left>=0 && right<s.length() && s[left] == s[right]){
		left--;right++;
	}
	return right-left-1;
	
}

signed main(){
	//IO;
	string s;
	cin >> s;
	
	int star=0,length=1;
	
	for(int i=0;i<s.length();i++){
		
		int stringA = pal(s,i,i);
		int stringB = pal(s,i,i+1);
		
		int max_length = max(stringA,stringB);
		if(max_length > length){
			length = max_length;
			star = i- (max_length-1)/2;
		}
		
	}
	
	//cout << s.substr(star,length);
	string ss(s.substr(star,length));
	cout << ss.length();
	
	return 0;
}