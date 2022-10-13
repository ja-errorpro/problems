#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
 
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll dstart = arr[1]-arr[0];
    ll dend = arr[n-1]-arr[n-2];
    ll diff = min(dstart, dend);
    ll idx = -1;
    for(ll i=1;i<n-1;i++){
        if(arr[i+1]-arr[i]<diff){
            diff = arr[i+1]-arr[i];
            idx = i;
        }
    }
    vector<ll> ans;
    if(idx == -1){
        if(dstart<dend){
            ans.push_back(arr[0]);
            for(ll i=2;i<n;i++){
                ans.push_back(arr[i]);
            }
            ans.push_back(arr[1]);
        }
        else{
            ans.push_back(arr[n-2]);
            for(ll i=0;i<n;i++){
                if(i!=n-2){
                    ans.push_back(arr[i]);
                }
            }
        }
    }
    else{
        ans.push_back(arr[idx]);
        for(ll i=idx+2;i<n;i++){
            ans.push_back(arr[i]);
        }
        for(ll i=0;i<idx;i++){
            ans.push_back(arr[i]);
        }
        ans.push_back(arr[idx+1]);
    }
    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
 
int main(){
    IO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}