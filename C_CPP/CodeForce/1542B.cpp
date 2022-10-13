/*
I_suck_at_programming. 
*/
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl;
#define fr(n,l) for(int i=n;i<l;i++)
#define frc(n,l) for(int i=n;i<=l;i++)
#define printa(a) fr(0,size(a)){cout<<a[i]<< ' ';}
//insignificant
#define int long long


bool solve(int n,int a,int b){

	if(n < 1) return false;
    if(n == 1) return true;
    if(b == 1) return true;
    if((n-1)%b == 0) return true;
    if(a != 1 && n%a == 0) if(solve(n/a,a,b)) return true;
    if(solve(n-b,a,b)) return true;
    //if(n == 1) return true;
    return false;
	
}
signed main(){
	IO;
	ll t;
	cin >> t;
	while(t--){
		ll a,b,n;
		cin >> n >> a >> b;
        bool x=solve(n,a,b);
        
        if(x) cout<<"Yes\n";
        
        else cout<<"No\n";
	}
	
	
	
    return 0;

}