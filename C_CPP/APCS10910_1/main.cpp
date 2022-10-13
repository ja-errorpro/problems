#include <bits/stdc++.h>

using namespace std;

bool cmp(int i,int j){
return i>j;
}

int main()
{
    cin.tie(0);
    int n=0;
    int y1=0,y2=0;
    int a1,a2,b1,b2,c1,c2;
    cin >>a1>>b1>>c1>>a2>>b2>>c2>>n;
    int detail[n+1]={0};
    for(int i=0,j=n;i<=n&&j>=0;i++,j--){
        y1=a1*pow(i,2)+b1*i+c1;
        y2=a2*pow(j,2)+b2*j+c2;
       // cout << y2<<endl;
        detail[i]=y1+y2;
       // cout << detail[i]<<endl;
    }
    sort(detail,detail+(n+1),cmp);
    cout << detail[0];

    return 0;
}
