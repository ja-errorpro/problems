/*
I_suck_at_programming.
*/
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0);
#define afsdf_djfkssdfa sjdajawdjsjkghuoiwkjdksdfsdf_m
#define cendl cout << endl;
#define fr(n,l) for(int i=n;i<l;i++)
#define fra(n,a) for(auto i:a)
#define frc(n,l) for(int i=n;i<=l;i++)
#define printa(a) fr(0,size(a)){cout<<a[i]<< ' ';}
#define ff first
#define ss second
//sets control,they can control:set,vector(must reserve memory)
#define setu(x,y,v) set_union(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define seti(x,y,v) set_intersection(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
#define setdu(x,y,v) set_symmetric_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v)) //vector must be sorted.
#define setd(x,y,v) set_difference(x.begin(),x.end(),y.begin(),y.end(),back_inserter(v))
//string control
#define toupper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define tolower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
//insignificant
//#define int long long
#define MAX 1000
int mp[MAX][MAX],dp[MAX][MAX],v[MAX][MAX];
int mv[4][2]={{1,0},{0,-1},{-1,0},{0,1}};
typedef struct node{
  int x,y;
  int dis;
  bool operator<(const node& mynode) const{
    return (mynode.dis < dis);     
  }      
}Node;
int main(){
  int ncase,n,m;
  priority_queue <Node> pq;
  Node mynode; 
  cin >> ncase;
  for(int m=0;m<ncase;m++){
    while (cin >> n >> m){
      memset(v,0,sizeof(v));
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){   
          dp[i][j]=199999999;          
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){   
          cin >> mp[i][j];          
        }
      }
      mynode.x=0;
      mynode.y=0;
      dp[0][0]=mynode.dis=mp[0][0];
      pq.push(mynode); 
      while(!pq.empty()){         
        mynode=pq.top();
        pq.pop();
        v[mynode.y][mynode.x]=1;
        for(int i=0;i<4;i++){
          Node tmp;
          if (((mynode.x+mv[i][0])<0)||((mynode.x+mv[i][0])>=m)) continue;        
          if (((mynode.y+mv[i][1])<0)||((mynode.y+mv[i][1])>=n)) continue;
          if (v[mynode.y+mv[i][1]][mynode.x+mv[i][0]]==0){
            if (dp[mynode.y+mv[i][1]][mynode.x+mv[i][0]]>(dp[mynode.y][mynode.x]+mp[mynode.y+mv[i][1]][mynode.x+mv[i][0]])) {
              dp[mynode.y+mv[i][1]][mynode.x+mv[i][0]]=(dp[mynode.y][mynode.x]+mp[mynode.y+mv[i][1]][mynode.x+mv[i][0]]); 
              tmp.x=mynode.x+mv[i][0];
              tmp.y=mynode.y+mv[i][1];
              tmp.dis=dp[mynode.y+mv[i][1]][mynode.x+mv[i][0]];
              pq.push(tmp);                                                                                                                                                                                                                                                                                       
            }                                                   
          }                
        }     
      }
      cout << dp[n-1][m-1] << endl;
    }
  }           
}