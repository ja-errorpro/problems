/*
meipu
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define sdawdasd kskdksddg

signed main(){
	IO;
	ll x,y;
	cin >> x >> y;
	
	ll t=__gcd(x,y);
	//t*b == y, t*a == x
	//cout << t;
	cout << t <<' '<< x/t <<' '<< y/t << endl;
	
	return 0;
}