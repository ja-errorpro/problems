#include <iostream>

using namespace std;

struct dice{
    int left,right,up,down,front,back;

};
struct control{
    int a,b;
};




int main()
{
    int n,m;
    cin >> n >> m;
    dice d[21];
    for(int i=0;i<21;i++){
        d[i].left = 5;
        d[i].right = 2;
        d[i].up = 1;
        d[i].down = 6;
        d[i].front = 4;
        d[i].back=3;
    }
    control cont[101];
    for(int i=0;i<m;i++){
        cin >> cont[i].a>>cont[i].b;
    }

    for(int i=0;i<m;i++){
        if(cont[i].b==-1){
            //
                int t=d[cont[i].a-1].front,s=d[cont[i].a-1].back;
                d[cont[i].a-1].front = d[cont[i].a-1].up;
                d[cont[i].a-1].back =  d[cont[i].a-1].down;
                d[cont[i].a-1].down = t;
                d[cont[i].a-1].up = s;
                //cout << d[cont[i].a-1].up <<endl;
//
        }
        if(cont[i].b==-2){
            //
                int t=d[cont[i].a-1].up,s=d[cont[i].a-1].down;
                d[cont[i].a-1].up=d[cont[i].a-1].left;
                d[cont[i].a-1].down = d[cont[i].a-1].right;
                d[cont[i].a-1].right=t;
                d[cont[i].a-1].left = s;
                //cout << d[cont[i].a-1].up  <<endl;

            //
        }
        if(cont[i].b>0){
            swap(d[cont[i].b-1],d[cont[i].a-1]);
        }
    }
    for(int i=0;i<n;i++){
        cout << d[i].up << ' ';
    }

    return 0;
}
