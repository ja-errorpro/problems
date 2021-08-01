#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
inline void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int pos=0;
    string str;
    str+=s[0];
    for(int i=1;i<n;i++){
        if(s[i]>s[pos]) break;
        str+=s[i];
        if(s[i]==s[pos]) pos++;
        else pos=0;
    }
    while(pos){
        str.pop_back();
        pos--;
    }
    int len=str.size();
    //cout<<str<<endl;
    for(int i=0;i<k;i++) cout<<str[i%len];
    cout<<endl;
}

signed main() {
    IO;
    solve();
    return 0;
}