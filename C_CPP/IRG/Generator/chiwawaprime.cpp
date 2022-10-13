#include"testlib.h"
#include <iostream>
using namespace std;
int main(int argc,char * argv[]){
	registerGen(argc,argv,1);
	int n = rnd.next(1,1000000);
	cout << n << endl;
	while(n--){
		cout << rnd.next(1,1000000) << endl;
	}
}