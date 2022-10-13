#include <bits/stdc++.h>
#define pb push_back
#define IOS cin.tie(0),cout.tie(0)
#define IN 1e5+5
#define endl '\n'
#define int long long
using namespace std;
const int N = IN;
vector<int> points;
int a[N]={},n,k,visited[N]={};

bool check(int m){
    points.clear();
    memset(visited,0,sizeof(visited));
    int cnt = k;
    if(a[2]-a[1]>m && cnt){
        cnt--;
        visited[0]=1;
        points.pb(a[1]);

    }
    for(int i=2;i<=n;i++){
        if(visited[i]) continue;
        if(points.size()==0){
            if(a[i]-a[i-1]<=m && cnt){
                cnt--;
                visited[i]=1;
                points.pb(a[i]);
                continue;
            }
            else{
                return 0;
            }
        }
        if(a[i]-points.back()>m){
            if(cnt ==0) return 0;
            cnt--;
            visited[i]=1;
            points.pb(a[i]);

        }
    }
    return 1;
}

signed main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
       // cout << n << ","<< k << endl;
        memset(visited,NULL,sizeof(visited));
        points.clear();
        memset(a,NULL,sizeof(a));
        if(n == k){
            cout << 0 << endl;
            continue;
        }
        for(int i=1;i<=n;i++){
            cin >> a[i];

        }
        if(n==1){
            cout << a[1] << endl;
            continue;
        }

        int l = a[n]-a[1];
        for(int i=2;i<=n;++i){
            l = min(a[i]-a[i-1],l);
        }
        sort(a+1,a+n+1,less<int>());
        /*for(int i=1;i<=n;i++){
            cout << a[i] << ' ';
        }*/
        int r = a[n]-a[1];

        /////////////////////
        while(l<=r){
            int m = (l+r)/2;
            if(check(m)){
               /*
                cout << m << endl;
                for(auto seg:points){
                    cout << seg << ' ';
                }
                cout << endl;
                */
                r=m-1;
            }
            else{
                l = m+1;
            }

        }
        cout << l << endl;


    }
    return 0;
}
