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
	int n;
	cin >> n;
	int a[n]={0};
	int max_height=0;
	int water_count=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		
		if(max_height > a[i] && i!=0){
			water_count+=max_height-a[i];
		}
		
		
		
		max_height = max(max_height,a[i]);
		
		
		
	}
	cout << water_count << endl;
	return 0;
}