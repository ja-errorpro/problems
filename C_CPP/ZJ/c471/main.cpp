#include<iostream>
#include <algorithm>
using namespace std;

struct sol{
    long long int w,f;
};
int N;
sol arr[100001];

bool cmp(sol i,sol j){

    return (i.w*j.f < j.w*i.f);

}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i].w;
    }
    for(int i=0;i<N;i++){
        cin >> arr[i].f;
    }
    sort(arr,arr+N,cmp);

    /*for(int i=0;i<N;i++){
        cout << arr[i].w << " "<< arr[i].f<<endl;
    }*/

    long long int sum =0;

    for(int i=1;i<N;i++){

            for(int j=0;j<i;j++){
            sum+=arr[j].w*arr[i].f;
            //cout << sum << endl;
        }

    }
    cout << sum <<'\n';
    return 0;
}
