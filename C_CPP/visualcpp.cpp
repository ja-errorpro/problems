/*
~3~
I_suck_at_programming.
-.-
All roads lead to AC.
._.
Haste makes AC.
=.=
*/

/*
//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \|     |// '.
//                 / \|||  :  |||// \
//                / _||||| -:- |||||- \
//               |   | \\  -  /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//               佛祖保佑         程式碼沒BUG
*/




#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma comment(linker, "/stack:200000000")

#include<bits/stdc++.h>
//#include<bits/extc++.h>
using namespace std;

#include <unistd.h>
const int mxbuf=65536;//default 65536，the less num,the better performance
char OB[mxbuf]; int OP;
inline char RC(){static char buf[mxbuf],*p=buf,*q=buf;return p==q&&(q=(p=buf)+read(0,buf,mxbuf))==buf?-1:*p++;}
//R, W support negative num
inline int R(){static char c;bool f=0;int a;while((c=RC())<'0'&&c!='-');if(c=='-')f=1,c=RC();a=c^'0';while((c=RC())>='0')a*=10,a+=c^'0';return f?(-a):a;}
inline void W(int n){static char buf[12],p;if(n==0)OB[OP++]='0';p=0;if(n<0)n=-n,OB[OP++]='-';while(n)buf[p++]='0'+(n%10),n/=10;for(--p;p>=0;--p)OB[OP++]=buf[p];OB[OP++]='\n';if(OP>mxbuf-20)write(1,OB,OP),OP=0;}
//can read EOF，return -1
inline int REOF(){static char c;while((c=RC())<0&&c!=0);if(c==0)return -1;int a=c^'0';while((c=RC())>='0')a*=10,a+=c^'0';if(c==0)return -1;return a;}


template<class T> long long Mod(T a,T b){return ((a%b)+b)%b;}
#define endl '\n'
#define ll long long
//#define int long long
#define CHIWAWA ios_base::sync_with_stdio(0); cin.tie(0);
#define GETOUT cout.tie(0);
#define gc getchar()
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
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
# include <Windows.h>

signed main(){
    //CHIWAWA;
    //GETOUT;

    MessageBox(NULL,"Hello World!","Hello World!",MB_OK);
    int t=1;
    //cin >> t;

    //cerr << "Time: " << (double)clock() / (double)CLOCKS_PER_SEC << '\n';
    return 0;
}