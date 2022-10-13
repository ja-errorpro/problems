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


stack<int> stk;
stack<char> pri;
stack<char> pp;
stack<char> syms;
string s;

int f(int left,int right){
  int c=0,num=0;;
  for(int i=right-1;i>=left;i--){
    if(s[i]==')')c++;    
    if(s[i]=='(')c--;
    if(s[i]=='+' && c==0)return f(left,i)+f(i+1,right);
    if(s[i]=='-' && c==0)return f(left,i)-f(i+1,right);
  }
  
  for(int i=right-1;i>=left;i--){ 
    if(s[i]==')')c++;    
    if(s[i]=='(')c--;
    if(s[i]=='*' && c==0)return f(left,i)*f(i+1,right);
    if(s[i]=='/' && c==0)return f(left,i)/f(i+1,right);
  }
  
  if((s[left]=='(')&&(s[right-1]==')'))return f(left+1,right-1);
  if(s[left]==' ' &&s[right-1]==' ')return f(left+1,right-1);
  if(s[left]==' ')return f(left+1,right);
  if(s[right-1]==' ')return f(left,right-1);
  
  if(isdigit(s[left])&&isdigit(s[right-1])){
    for(int i=left;i<right;i++) num=num*10+s[i]-'0';
    return num;
  }
}
inline void solve(){
	while(getline(cin,s)){
		cout << f(0,s.length()); // no stack!!!!
		return;
	};
	int k=1,num=0;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]>='0' && s[i]<='9'){
			num+=k*(s[i]-'0');
			if(i-1>=0&&s[i-1]>='0'&&s[i-1]<='9'){
				k*=10;
			}
			else{
				stk.push(num);
				num=0;
				k=1;
			}
		}else if(s[i]=='*' || s[i] =='/' ||s[i] ==')') {
		pri.push(s[i]);pp.push(s[i]);}
		else if(s[i]=='+' || s[i]=='-') pp.push(s[i]);
		else if(s[i]=='('){} //calc();
	}
	//calc();
	
	cout << stk.top() << endl;



}
signed main(){
	//IO;
	//GETOUT;

	int t;
	t=1;
	while(t--)solve();















	return 0;
}
