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
#define fra(n,a) for(auto i:a)
#define frc(n,l) for(int i=n;i<=l;i++)
#define frx(i,n,l) for(int i=n;i<l;i++)
#define printa(a) fr(0,size(a)){cout<<a[i]<< ' ';}
//sets control,they can control:set,vector(must reserve memory)
#define setu(x,y,v) set_union(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define seti(x,y,v) set_intersection(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define setdu(x,y,v) set_symmetric_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v)) //vector must be sorted.
#define setd(x,y,v) set_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
//string control
#define toupper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define tolower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
//insignificant
//#define int long long
const int MAX=1e9+7;
void dfs(ll v,vector<bool>& vis,vector<int> adj[],ll& dfssum)
{
	dfssum++;
	vis[v] = true;

	for(ll u:adj[v])
	{
		if(!vis[u])
		{
			dfs(u,vis,adj,dfssum);
		}
	}
}
inline void solve(){
	int n;
	cin >> n;
	int a[101],b[101];
	int asum=0,bsum=0;
	
	frc(1,n) {
		cin >> a[i]; asum+=a[i];
	}
	frc(1,n) {
		cin >> b[i]; bsum+=b[i];
	}
	
	int abdif=0;
	frc(1,n){
		abdif+=abs(a[i]-b[i]);
	}
	if(asum!=bsum || abdif%2){
		cout << "-1" << endl;
		return;
	}
	cout << abdif/2 << endl;
	frc(1,n){
		if(a[i]==b[i]) continue;
		if(a[i]>b[i]) 
			for(int j=1;j<=n;j++){
				if(i!=j && a[j]<b[j]){
					int dif = a[i]-b[i], bbdif = b[j]-a[j];
					if(dif>bbdif){
						a[i]-=bbdif;
						a[j]+=bbdif;
						for(int k=1;k<=bbdif;k++){
							cout << i << ' ' << j << endl;
						}
					}
					else{
						a[i]-=dif;
						a[j]+=dif;
						for(int k=1;k<=dif;k++){
							cout << i << ' ' << j << endl;
						}
					}
					if(dif==0){
						break;
					}
						
				}
			}
		
		
		
	}





}
signed main(){
	IO;






	int t;
	cin >> t;
	while(t--)solve();











	return 0;
}
