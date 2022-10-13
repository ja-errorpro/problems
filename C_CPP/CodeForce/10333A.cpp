#include<bits/stdc++.h>
using namespace std;
struct pos{
	int x;
	int y;
};
int n;
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	pos queen,king,target;
	cin >> n;
	cin >> queen.x >> queen.y >> king.x >> king.y >> target.x >> target.y;
	pos target_p,king_p;
	target_p.x = target.x - queen.x;
	target_p.y = target.y - queen.y;
	king_p.x = king.x - queen.x;
	king_p.y = king.y - queen.y;
	if((target_p.x * king_p.x > 0) && (target_p.y * king_p.y > 0)){
		cout << "YES" << '\n';
	}
	else{
		cout << "NO" << '\n';
	}
	
	return 0;
	
}
