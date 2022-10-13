#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s,t;
    stringstream ss;

    double a[20]={0};int n=0;
    getline(cin,s);
    cin.sync();
    ss << s;
    while(ss >> t){
        a[n]=atof(t.c_str());
       // cout << a[n]<<endl;
        n++;
       // cout << atof(t.c_str()) << endl;
    }
    for(int i=0;i<n;i++){
        cout << a[i]<<endl;
    }
    ss.str("");
    ss.clear();
    getline(cin,s);
    cin.sync();
    ss << s;
    int c=0;
    int alia[n-1]={0};
    while(ss>>t){
        if(c<=n-1){
            if(t=="+"){
                alia[c]=1;
            }else if(t=="-"){
                alia[c]=2;
            }else if(t=="*"){
                alia[c]=3;
            }else if(t=="/"){
                alia[c]=4;
            }
            c++;
        }
    }
    for(int i=0;i<n-1;i++)
    cout << alia[i]<<endl;


    return 0;
}
