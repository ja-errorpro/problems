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
#define fra(n,a) for(auto n:a)
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
int LIS(vector<int>& v){ //Longest Increasing Subsequence Length
     int n = v.size();
     int dp[n];

     int ans = 0;
     for(int i = 0; i < n; i++){
          dp[i] = 1;
          for(int j = 0; j < i; j++){
               if(v[i] >= v[j]){
                    dp[i]= max(dp[i], 1 + dp[j]);
                    ans = max(ans, dp[i]);
               }
          }
     }
     return ans;
}
inline void solve(){


	int n;
	
	cin >> n;
	
	int a[n]={0};
	
	
	int b[n]={0};
	
	fr(0,n) {
		
		cin >> a[i];
		
	}
	fr(0,n) {
		
		cin >> b[i];
		
	}
	
	sort(a,a+n,greater<int>() );
	
	sort(b,b+n,greater<int>() );
	
	int asum=0,bsum=0;
	
	fr(0,n-(n/4)){
		
		asum+=a[i];
		
		bsum+=b[i];
		
	}
	
	//cout << asum << " " << bsum << endl;
	if(asum>=bsum){
		cout << "0" << endl;
		return;
	}
	else{
		int dif = 0;
		
		int k = n-(n/4);
		
		int l = k-1;
		
		int m = n/4;
		int c=k;
		while(asum<bsum){
			dif++;
			asum+=100;
			bsum+=100;
			if( (dif+n)/4 > m){
				
				if(l>=0){
					
					asum -= a[l];
					bsum -= b[l];
					l--;
					
				}
				
				m++;
				
			}
			if(c<n){
				
				bsum+=b[c];
				
				c++;
				
			}
			
		}
		
		cout << dif << endl;
	}

}
signed main(){
	//IO;


	int t;
	cin >> t;
	while(t--)solve();















	return 0;
}
