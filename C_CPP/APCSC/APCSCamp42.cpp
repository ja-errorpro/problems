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
vector<vector<bool> >chkR,chkC,chkB;
vector<int> g(81);
void solve(int i){
	if(i==81){
		frx(j,0,81) cout << g[j];
		cout << endl,exit(0);
	}
	else if(g[i]) solve(i+1);
	else{
		int r=i/9,c=i%9,b=r/3*3+c/3;
		for(int j=1;j<=9;j++){
			if(!chkR[r][j] && !chkC[c][j] && !chkB[b][j]){
				g[i]=j;
				chkR[r][j]=chkC[c][j]=chkB[b][j]=true;
				solve(i+1);
				g[i]=0;
				chkR[r][j]=chkC[c][j]=chkB[b][j]=false;
			}
		}
	}






}
signed main(){
	IO;
	//GETOUT
	chkR.resize(9);
	fr(0,9) chkR[i].resize(10);
	chkB=chkC=chkR;
	string s;
	cin >> s;
	bool ok = false;
	fr(0,81){
		if(s[i]=='.') g[i]=0;
		else{
			int t=s[i]-'0';
			int r=i/9,c=i%9,b=r/3*3+c/3;
			if(chkR[r][t] || chkC[c][t] || chkB[b][t]){
				ok = true;
				break;
			}
			g[i]=t;
			chkR[r][t] = chkC[c][t] = chkB[b][t] = true;	
		}
	}
	if(!ok) solve(0);
	cout << "No solution." << endl;



	return 0;
}
