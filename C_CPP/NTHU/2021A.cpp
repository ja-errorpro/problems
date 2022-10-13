/*
meipu
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
//#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define sdawdasd kskdksddg


signed main(){
	IO;
	int n,k;
	cin >> n >> k;
	//vector<vector<int>> a(n+1,vector<int>(n+1,0));
	int **a;
	a= new int*[n+1];
	for(int i=0;i<n+1;i++) a[i] = new int[n+1];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=1;
		}
	}
	
	//vector<vector<int>> d(n+1,vector<int>(n+1,0));
	int **d;
	d = new int*[n+1];
	for(int i=0;i<n+1;i++) d[i] = new int[n+1];
	
	for(int i=0;i<k;i++){
		int x,y;
		
		cin >> x >> y;
		
		a[x-1][y-1]=2;
	}
	
/*	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}*/
	int ans=0;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(i==0||j==0) {
			d[i][j]=0;continue;}
			
			//cout << a[i-1][j-1] << endl;
			if(a[i-1][j-1]==1){
				d[i][j]=min( min(d[i][j-1],d[i-1][j]),d[i-1][j-1] )+1;
				ans = max(ans,d[i][j]);
				
			}
			else{
				d[i][j]=0;
			}
			
		}
	}
	cout << ans*ans << endl;
	
	for(int i=0;i<n+1;i++){
		delete[] a[i];
		delete[] d[i];
	}
	delete a;
	delete d;
	return 0;
}