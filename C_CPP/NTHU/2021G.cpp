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
	IO;
	string s;
	cin >> s;
	int x=0,y=0;
	for(int i=0;i<s.length();i++){
		switch(s[i]){
			case 'w':
				y-=1;
				break;
			case 'a':
				x-=1;
				break;
			case 's':
				y+=1;
				break;
			case 'd':
				x+=1;
				break;
			
		}
		
		
	}
	cout << '('<<x <<',' <<y << ')';
	return 0;
}