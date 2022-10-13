#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n && n){
        int count=0;
        if(n>3){
            for(int i=3;n/i>i/2;i+=2){
                if(n%i==0){
                    count++;
                }
            }
            for(int i=1;n/(2*i)>i-1;i++){
                if(n%(2*i)==i){
                    count++;
                }
            }
        }
        cout << count << endl;


    }
    return 0;
}
