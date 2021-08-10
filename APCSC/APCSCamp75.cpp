/*
I_suck_at_programming.
*/
#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define GETOUT cout.tie(0);
#define cls cin.sync();
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl;
#define fr(n,l) for(int i=n;i<l;i++)
#define fra(n,a) for(auto n:a)
#define frc(n,l) for(int i=n;i<=l;i++)
#define frx(i,n,l) for(int i=n;i<l;i++)
#define printv(a) fr(0,size(a)){cout<<a[i]<< ' ';}
#define printa(a) fr(0,sizeof(a)/sizeof(a[0])){cout << a[i] << ' ';}
#define getpos(a,v) lower_bound(v.begin(),v.end(),a) - v.begin()
#define arrpos(i,a) distance(a,find(a,a+sizeof(a)/sizeof(a[0]),i))
//sets control,they can control:set,vector(must reserve memory)
#define setu(x,y,v) set_union(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define seti(x,y,v) set_intersection(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define setdu(x,y,v) set_symmetric_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v)) //vector must be sorted.
#define setd(x,y,v) set_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
//string control
#define toupper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define tolower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
//insignificant
#define int long long
const int MAX=1e9+7;
int t[200001];
int n,m,maxt=-1;
// 7 2
// 1 2 3 4 5 6 7
bool chk(int k){
	
	if(maxt>k) return 0;
	else{
		int c=1;
		ll now = 0;
		
		fr(0,n) {
			if(now+t[i]<=k) now+=t[i];
			else {
				now = t[i];c++;//break;
			}
		}
		
		if(c<=m) return true;
		else return false;
	}
}
inline void solve(){

	int sumt=0;
	cin >> n >> m;
	fr(0,n){
		cin >> t[i];
		sumt+=t[i];
		maxt=max(maxt,t[i]);
	}
	
	int l = maxt-1;
	int r = sumt;
	
	while(l!=r-1){
		ll mid = (l+r)/2;
		if(chk(mid)){
			r=mid;
		}
		else{
			l=mid;
			//cout << r << '*' <<endl;
		}
	}
	

	cout << r << endl;




}
signed main(){
	//IO;
	//GETOUT

	int p;
	p=1;
	while(p--)solve();















	return 0;
}
