#include <iostream>
#include<conio.h>
using namespace std;

int main() {
	system("bcedit /set hypervisorlaunchtype off");
	system("dism /Online /Disable-Feature /FeatureName:Microsoft-Hyper-V-All");
	cout << "Press Any Button to Restart PC...\n" ;
	while(1){
		if(_kbhit()){
			system("shutdown -r -t 0");
			break;
		}
	}
	
	return 0;
}