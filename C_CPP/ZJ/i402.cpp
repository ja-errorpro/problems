//#pragma GCC optimize("Ofast")
#pragma loop_opt(on)
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma comment(linker, "/stack:200000000")

#include <bits/stdc++.h>
using namespace std;

#include <unistd.h>
const int mxbuf=2000;//default 65536，the less num,the better performance
char OB[mxbuf]; int OP;
inline char RC(){static char buf[mxbuf],*p=buf,*q=buf;return p==q&&(q=(p=buf)+read(0,buf,mxbuf))==buf?-1:*p++;}
//R, W support negative num
inline int R(){static char c;bool f=0;int a;while((c=RC())<'0'&&c!='-');if(c=='-')f=1,c=RC();a=c^'0';while((c=RC())>='0')a*=10,a+=c^'0';return f?(-a):a;}
inline void W(int n){static char buf[12],p;if(n==0)OB[OP++]='0';p=0;if(n<0)n=-n,OB[OP++]='-';while(n)buf[p++]='0'+(n%10),n/=10;for(--p;p>=0;--p)OB[OP++]=buf[p];OB[OP++]='\n';if(OP>mxbuf-20)write(1,OB,OP),OP=0;}
//can read EOF，return -1
inline int REOF(){static char c;while((c=RC())<0&&c!=0);if(c==0)return -1;int a=c^'0';while((c=RC())>='0')a*=10,a+=c^'0';if(c==0)return -1;return a;}


const int inf = 1 << 30;
array<int, 1004> A, B;
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
		putchar_unlocked('-');
		x = -x;
	}
	if(x >= 10) writeint(x / 10);
	putchar_unlocked(x % 10 + '0');
}

int dot(int p, int n, int m){
    int sum = 0, ans = -inf;
    for(int i = 1; i <= m; i++){
        if(p + i < 1 || p + i > n) continue;
        sum += A[p + i] * B[i];
        ans = max(ans, sum), sum = max(sum, 0);
    }
    return ans;
}
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m, ans = -inf;
    n =R() ;m=R();
    for(int i = 1; i <= n; ++i) A[i]=R();
    for(int i = 1; i <= m; ++i) B[i]=R();
    for(int i = 1 - m; i <= n; ++i) ans = max(ans, dot(i, n, m));
    for(int i = 1; i <= m >> 1; ++i) swap(B[i], B[m - i + 1]);
    for(int i = 1 - m; i <= n; ++i) ans = max(ans, dot(i, n, m));
    writeint(ans);
    putchar_unlocked('\n');
    return 0;
}