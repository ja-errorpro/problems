/*
I_suck_at_programming.
*/
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define GETOUT cout.tie(0);
#define ff first
#define ss second
#define cls cin.sync();
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

	int n,m;
	cin >> n >> m;
	vector<int> nobles(n,0);
	vector<vector<int> > fri(n,vector<int>(n,-1));
	fr(0,n){
		fri[i][i]=0;
	}
	fr(0,m){
		int a,b;
		cin >> a >> b;
		fri[a-1][b-1]=1;
		fri[b-1][a-1]=1;
		nobles[a-1]++;
		nobles[b-1]++;
	}
	/*fr(0,n){
		cout << nobles[i] << ' ';
	}
	cendl;*/
	int remain=n;
	for(int i=0;m>0;i++){
		if(nobles[i]>0){
			//cout << i << ' ';
			m-=nobles[i];
			remain--;
			frx(j,0,n){			
				fri[i][j]--;
				fri[j][i]--;
			}
			nobles[i]=-1;
			//break;		
		}
		if(i==n-1){
			i=0;
		}
	}
/*	fr(0,n){
	
	frx(j,0,n){
			cout << fri[i][j] << ' ';
		}
		cendl;
	}*/
	
	int q;
	cin >> q;
	while(q--){
		int x,ans=remain;
		cin >> x;
		if(x==1){
			int a,b;
			cin >> a >> b;
			if(nobles[a]!=-1&&nobles[b]!=-1){
				fri[a-1][b-1]=1;
				fri[b-1][a-1]=1;
				nobles[a-1]++;
				nobles[b-1]++;
				m++;
			}
		}else if(x==2){
			int a,b;
			cin >> a >> b;
			fri[a-1][b-1]=0;
			fri[b-1][a-1]=0;
			nobles[a-1]--;
			nobles[b-1]--;
			if(m>0)m--;
		}else if(x==3){
			cout << ans << endl;
		}
		if(x!=3){
		
		for(int i=0;m>0;i++){
			if(nobles[i]>0){
				m-=nobles[i];
				remain--;
				frx(j,0,n){
					fri[i][j]--;
					fri[j][i]--;
				}
				nobles[i]=-1;
			}
			if(i==n-1){
				i=0;
			}
		}
		}
		
	}
	





}
signed main(){
	//IO;
	//GETOUT

	int t;
	t=1;
	while(t--)solve();















	return 0;
}
