#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    char ch=getch();
    while(ch){
    int s;
    time_t t;
    for(int i=0;i<8;i++)
    {
        _sleep(1000);
        srand((unsigned)time(&t));
        s=rand()%8+1;

        switch(s){
            case 1:
            case 8:
                cout << "C" << endl;
                break;
            case 2:
                cout << "D" << endl;
                break;
            case 3:
                cout << "E" << endl;
                break;
            case 4:
                cout << "F" << endl;
                break;
            case 5:
                cout << "G" << endl;
                break;
            case 6:
                cout << "A" << endl;
                break;
            case 7:
                cout << "B" << endl;
                break;
        }

    }
    ch=getch();
    system("cls");
    }

    return 0;
}
