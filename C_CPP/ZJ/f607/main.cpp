#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0);
    long long int n,L,x,cost=0,w;
    cin >> n >> L;
    int cut[n];
    vector<int> cut_point = {0,L};
    for(int i=0;i<n;i++){
        cin >> x >> w;
        cut[w-1]=x;
    }


    int len=2,index,left,right;
    for(int i=0;i<n;i++){
        index = -1;
        left =0,right = len-1;
        while(true){
            if(right - left == 1){
                index = left+1;
                break;
            }
            index = (left+right)/2;
            if(cut[i]<cut_point[index]){
                right = index;

            }
            else{
                left = index;
            }
        }
        cut_point.insert(cut_point.begin()+index,cut[i]);
        cost += cut_point[index+1]-cut_point[index-1];
        len++;
    }
    cout << cost;
    return 0;
}
