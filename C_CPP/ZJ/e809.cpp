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
	string r,s;
	cin >> r >> s;
	map<char,int> m;
	for(int i=0 ; i < r.size() ; ++i){
		m[r[i]] = i;
	}
	int cnt[30]={0};
	for(int i=0 ; i < s.size() ; ++i ){
		++cnt[m[s[i]]] ;
	}
	for(int i=1 ; i < r.size() ; ++i ){
		cnt[i] += cnt[i-1];
	}
	int N ,num;
	cin >> N;
	while(N--){
		cin >> num;
		int tmp = lower_bound(cnt,cnt+r.size(),num) - cnt;
		cout << r[tmp] << endl;
	}
	return 0;
}