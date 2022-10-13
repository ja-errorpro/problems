/*
meipu
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define sdawdasd kskdksddg
#define ff fflush(stdout);
signed main(){
	//IO;
	
	cout << '@' << endl;
	ff;
	int length;
	cin >> length;
	int L=1,R=length/2+1;
	int a[length+1]={0};
	
	int count=0,maxe=0;
	while(count<10){
		int arr;
		
		cout << '? ' << L <<' '<<R<<endl;ff;
		cin >> arr;
		if(arr<maxe){
			for(int i=L;i<=R;i++) a[i]=arr;
		}
		maxe = max(maxe,arr);
		
		
		
		
		
		
		if(count==0){
			L=R+1;R=length;
		}
		else{
		
			L=lower_bound(a,a+length,max);
			R=upper_bound(a,a+length,max);
			
		}
		count++;
	}
	for(int i=1;i<length;i++){
		cout << a[i] <<' ';
	}
	return 0;
}