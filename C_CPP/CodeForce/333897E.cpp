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
	int n;
	cin >> n;
	
	ll a[n][n]={-1};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	
	int x1,y1,x2,y2;
	int grade1=0,grade2=0;
	cin >> x1 >> y1 >> x2 >> y2;
	a[x1][y1]=-1;a[x2][y2]=-1;
	int count=0;
	while(count<n*n){
		if(count%2==0){
			
			grade1+= max(a[x1-1][y1], max(a[x1+1][y1], max(a[x1][y1+1],a[x1][y1-1]) ) );
			
		}else{
			
			
			
			
		}
		count++;
	}
	
	
	return 0;
}