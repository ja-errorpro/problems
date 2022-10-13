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
	int n,m;
	cin >> n >> m;
	m+=1;
	int *a = new int[n];
	int count;
	
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	count =1;
	int start=0;
	int *b = new int[n];
	while(count<n){
		
		if(n-1==count )cout << a[start] << ",";
	
		for(int i=start;i<n-count;i++){
			a[i]=a[i+1];
		}
		start = (start+m-1)%(n-count);
		count++;
		
	}
	cout << a[0] << endl;
	return 0;
}