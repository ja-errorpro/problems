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
const int NN = 10;
bool visited[NN];
int nums[10];
vii p(10);
int mxlev = 0;
int id=0;
void dfs(int start,vii lst){
    
    if(start==lst.size()){
        cout << '[' << ++id << "] ";
        fr(j,0,start){
            cout << p[j] << ' ';
        }
        cendl;
        return;
    }
    else
        fr(i,0,lst.size()){
            if(!visited[i]){
                visited[i] = true;
                p[start] = lst[i];mxlev++;
                dfs(start+1,lst);
                p[start] = 0;
                visited[i] = false;
            }
        }
}
void comb(int i,int s,int m){
    
    if(i==m-1){
        vii lst;
        
        for(;s<=9;s++){
            lst.clear();
            for(int l=0;l<m-1;++l)
                lst.pb(nums[l]);
            lst.pb(s);
            dfs(0,lst);
        }
    }else if(i<m-1){
        while(s<=9-m+i+1){
            nums[i] = s;
            ++s;
            comb(i+1,s,m);
        }
    }
}
inline void solve(int choice){

    
    int M;
    fr(i,0,9) nums[i]=i+1;
    memset(visited,false,sizeof(visited));
    vii lst;
    lst.clear();
    double c;
    switch(choice){
        case 0:
            return;
        case 1:
            cin >> M;
            lst.resize(M);
            iota(ALL(lst),1);
            dfs(0,lst);
            cout << mxlev << endl;
            break;
        case 2:
            cin >> M;
            
            fr(i,0,M){
                int x;cin >> x;
                lst.pb(x);
            }
            c = (double)clock();
            dfs(0,lst);
            c = clock() - c;
            cout << "\nTime = "<<c*1000/CLOCKS_PER_SEC << "ms\n";
            break;
        case 3:
            cin >> M;
            c = (double)clock();
            comb(0,1,M);
            c = clock() - c;
            cout << "\nTime = "<<c*1000/CLOCKS_PER_SEC << "ms\n";
    }
    
    cendl;
    











}
signed main(){
    //CHIWAWA;
    //GETOUT;

    int cmd=0;
    do{
        cout << endl << "** Permutation Generator **";
        cout << endl << "* 0. Quit *";
        cout << endl << "* 1. N numbers from 1..N *";
        cout << endl << "* 2. M numbers from input *";
        cout << endl << "* 3. M numbers from 1..9 *";
        cout << endl << "***************************";
        cout << endl << "Input a choice(0, 1, 2, 3): ";
        cin >> cmd;
        solve(cmd);
    }while(cmd!=0);
    //cerr << "Time: " << (double)clock() / (double)CLOCKS_PER_SEC << '\n';
    return 0;
}