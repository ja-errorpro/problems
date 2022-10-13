#include <iostream>
#define ll long long
using namespace std;
//快速冪取模
ll power(ll x,ll y,ll mod){
    ll i=1;
    while(y){
        if(y&1) i = i * x % mod;
        x = x * x % mod;
        y >>= 1;
    }
    return i;
}
int main()
{
    ll x,y,z;
    z=1e9+7;
    cin >> x >> y ;
    cout << power(x,y,z);
    return 0;
}
