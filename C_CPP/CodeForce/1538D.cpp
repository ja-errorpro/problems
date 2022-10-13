#include<bits/stdc++.h>
#define fora(i, a, b) for(int i = a; i <= b; i++)
#define fors(i, a, b) for(int i = a; i >= b; i--)
#define ll long long
using namespace std;
int t, a, b, k;
int extr(int a){  //计算一个数可以最多被除的次数
    int sq = sqrt(a), tmp = 0;
    fora(i, 2, sq)
        while(a % i == 0){
            a /= i;
            tmp++;
        }
    if(a > 1) tmp++;
    return tmp;
}
int main(){
    cin >> t;
    while(t--){
        cin >> a >> b >> k;
        int tmp = extr(a) + extr(b), ans = 1;
        if(k > tmp) ans = 0;
        if(k == 1 && (a == b || max(a, b) % min(a, b) != 0)) ans = 0;
        cout << (ans == 1 ? "YES" : "NO") << endl;
    }
}