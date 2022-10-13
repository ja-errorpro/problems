#include <bits/stdc++.h>
using namespace std;
int n,l,r;
int main()
{
    cin >> n ;
    vector<int> lines;
    lines.resize(10000000);
    for(int i=0;i<n;i++){


            cin >> l >> r;
            for(int k=l;k<r;k++){
                lines[k]=1;
            }

    }
    int sum=0;
    for(int i=0;i<10000000;i++){
        sum+=lines[i];
    }
    cout << sum<<endl;
    return 0;
}
