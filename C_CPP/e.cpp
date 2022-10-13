#include<bits/stdc++.h>
using namespace std;
signed main(){
    string s,t;
    getline(cin,s,'\n');
	cout << s << endl;
    stringstream ss(s);
    int a[1000]={0},i=0;
    while(getline(ss,t,' ')){
	    a[i] = stol(t);
		i++;
    }
    for(int j=0;j<5;j++){
        cout << a[j] << ' ';
    }
}