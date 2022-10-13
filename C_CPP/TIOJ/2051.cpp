/*
~3~
I_suck_at_programming.
-.-
All roads lead to AC.
._.
Haste makes AC.
=.=
*/
#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma comment(linker, "/stack:200000000")

#include<bits/stdc++.h>
//#include<bits/extc++.h>
using namespace std;

template<class T> long long Mod(T a,T b){return ((a%b)+b)%b;}
#define endl '\n'
#define ll long long
//#define int long long
#define CHIWAWA ios_base::sync_with_stdio(0); cin.tie(0);
#define GETOUT cout.tie(0);
#define gc getchar()
#define cendl putchar('\n');
template<class T> bool chmax(T &a,T b){return a<b?(a=b,1):0;} 
template<class T> bool chmin(T &a,T b){return a>b?(a=b,1):0;} 
#define fr(bob,n,l) for(int bob=(n);bob<(l);bob++)
#define fra(ns,a) for(auto (ns):a)
#define frc(bot,ns,l) for(int bot=(ns);bot<=(l);bot++)
#define frx(i,ns,l) for(int i=(ns);i<(l);i++)
#define mem(arr,initn) memset(arr,initn,sizeof(arr))
#define ALL(va) (va).begin(),(va).end()
#define ALLa(arr) (arr),(arr)+sizeof((arr))/sizeof((arr)[0])
#define printv(va) {fr(i,0,size((va))){cerr<<(va)[i]<< ' ';}cendl;}
#define printa(va) {fr(i,0,sizeof((va))/sizeof((va)[0])){cerr << (va)[i] << ' ';}cendl;}
#define getpos(va,v) lower_bound((v).begin(),(v).end(),(va)) - (v).begin()
#define arrpos(i,va) distance((va),find(ALLa((va)),i))

#define pb emplace_back
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<long double,long double> pdd;
typedef vector<int> vii;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<pdd> vpd;
#define fi first
#define se second
#define setu(x,y,v) set_union(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define seti(x,y,v) set_intersection(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define setdu(x,y,v) set_symmetric_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define setd(x,y,v) set_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define toupper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define tolower(s) transform(s.begin(),s.end(),s.begin(),::tolower)

const int MAX=1e9+7;
const int MOD=998244353;



inline int nextint(){
	int x=0,w=1;char ch=0;
  	while(ch<'0'||ch>'9'){ 
    	if(ch == '-')w=-1; 
    	ch=getchar();               
  	}
  	while(ch>='0'&&ch<='9')x=(x<<1)+(x<<3)+(ch-'0'),ch=getchar();
  	return x*w;
}
inline void writeint(int x) {
	if(x < 0) {
		putchar('-');
		x = -x;
	}
	if(x >= 10) writeint(x / 10);
	putchar(x % 10 + '0');
}
int ch[260];
map<string,int> mp;
set<string> ss;
stack<int> stk;
int tmp;
inline void solve(){
	
	string che;cin >> che;
    int len = che.length();
    int nxt = len;
    fr(i,0,len){
        if(che[i]=='(') stk.push(i);
        else if(che[i]==')'){
            tmp = 0;
            fr(j,i+1,len){
                if(che[j]-'0'>=0&&che[j]-'0'<=9){
                    tmp*=10;tmp+=che[j]-'0';
                }else{
                    nxt = j-1;break;
                }
            }
            if(tmp>1){
                fr(j,stk.top()+1,i) ch[j]*=tmp;
                stk.pop();
            }
            i = nxt;nxt = che.length();
        }else if('0'<=che[i]&&che[i]<='9'){
            tmp = 0;
            fr(j,i,len){
                if(che[j]>='0'&&che[j]<='9'){
                    tmp*=10;tmp+=che[j]-'0';
                }else{
                    nxt = j-1;break;
                }
            }
            ch[i-1]*=tmp;i=nxt;nxt = len;
        }
        else ch[i]=1;
    }
	string ts;
    fr(i,0,len){
        if('A'<=che[i]&&che[i]<='Z'){
            ts = che[i];
            if(i+1<len&&'a'<=che[i+1]&&che[i+1]<='z'){
                ts+=che[i+1];
                mp[ts]+=max(ch[i],ch[i+1]);
            }
            else mp[ts] += ch[i];
            ss.insert(ts);
        }
    }
    cout << che << endl;
    for(auto i:ss){
        cout << i << ":" << mp[i] <<endl;
    }








}
signed main(){
	CHIWAWA;
	//GETOUT;
	
	
	int t=1;
	
	while(t--)solve();
	//cerr << "Time: " << (double)clock() / (double)CLOCKS_PER_SEC << '\n';
	return 0;
}