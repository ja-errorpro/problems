#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
 
 
signed main(){
	//IO;
	ll n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    map<int,int> a[n+1],b[n+1];
    for(int i=1;i<=n;i++){
        for(auto j:a[i-1]){
			a[i][j.first]=j.second;
		}
            
        a[i][s[i-1]-'a']++;
    }
    
    for(int i=n-1;i>=0;i--){
        for(auto j:b[i+1]){
			b[i][j.first]=j.second;
		}
		b[i][s[i]-'a']=i;
    }
    
    for(int i=0;i<q;i++){
        ll l,r;
        cin >> l >> r;
        map<int,int> v;
        
        for(auto j:a[r]){
            v[j.first] = j.second - a[l-1][j.first];
        }
        ll cnt=0;
        for(auto j:v){
            cnt += j.second * (j.first+1);
        }
        cout << cnt << endl;
    }
	
	
	return 0;
}