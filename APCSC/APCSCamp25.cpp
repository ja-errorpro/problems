/*
I_suck_at_programming.
*/

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
list<int> liT;
inline void solve(){
	
	int x;
	cin >> x;
	bool chk=false;
	switch(x){
		case 1:{
			
			int n1;
			cin >> n1;
			liT.push_front(n1);
			
			break;
		}
		case 2:{
			int n2;
			cin >> n2;
			liT.push_back(n2);
			
			break;
		}
		case 3:{
			int n3,a1;
			cin >> n3 >> a1;
			auto chk = find(liT.begin(),liT.end(),a1);
			if(chk!=liT.end()){
				liT.insert(chk,n3);
			}
			else{
				cout << "peko" << endl;
			}
			break;
		}
			
		case 4:{
			int n4,a2;
			cin >> n4 >> a2;
			auto chk =find(liT.begin(),liT.end(),a2);
			if(chk!=liT.end()){
				liT.insert(next(chk),n4);
			}
			else{
				cout << "peko" << endl;
			}
			break;
		}
			
		case 5:{
			int a3;
			cin >> a3;
			auto chk=find(liT.begin(),liT.end(),a3);
			if(chk!=liT.end()) {
				if(chk==liT.begin()){
					cout << "NULL" << endl;
					break;
				}
				cout << *prev(chk) << endl;
			}else{
				cout << "peko" << endl;
			}
			break;
		}
			
		case 6:{
			int a4;
			cin >> a4;
			auto chk=find(liT.begin(),liT.end(),a4);
			if(chk!=liT.end()) {
				if(chk==prev(liT.end())){
					cout << "NULL" << endl;
					break;
				}
				cout << *next(chk) << endl;
			}else{
				cout << "peko" << endl;
			}
			break;
		}
			
		case 7:{
			int a5;
			cin >> a5;
			auto chk = find(liT.begin(),liT.end(),a5);
			if(chk!=liT.end()){
				liT.remove(a5);
			}else{
				cout << "peko" << endl;
			}
			break;
		}
			
	}






}
signed main(){
	IO;
	//GETOUT

	int t;
	cin >> t;
	while(t--)solve();


	












	return 0;
}
