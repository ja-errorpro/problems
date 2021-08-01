#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int a[200001];

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            cnt+=a[i];
        }
        if(cnt%n!=0){
            cout << "-1" << endl;
            continue;
        }
        cnt/=n;
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(a[i]>cnt);
        }
        cout << ans << endl;

    }
    return 0;
}
