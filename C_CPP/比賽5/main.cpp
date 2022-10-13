#include <iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;
double distance(){int x1,int x2,int y1,int y2}{
    double s=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return s;
}
int main()
{
    double n;
    double >> n;
    int requirepointx[20]={1268,1222,1345,1151,1265,1207,1167,1166,1142,1045,1087,948,831,816,927,823,816,689,760,678};
    int requirepointy[20]={453,427,492,429,527,589,630,582,528,503,597,605,426,350,382,493,584,444,241,271};
    double requirecount[20]={33,35,22,29,28,34,37,45,37,45,50,33,29,35,43,42,23,34,31,37};
    int redpointx[10]={1184,1262,1158,957,872,725,674,864,605,920};
    int redpointy[10]={463,593,418,562,343,302,448,377,315,427};
    double pointlevelcost[4]={50000000,42000000,29000000,22000000};
    double req_to_red_point_distance[20][10];
    for(int i=0;i<20;i++){
        for(int j=0;i<10;j++){
            req_to_red_point_distance[i][j]=distance(requirepointx[i],redpointx[j],requirepointy[i],redpointy[j]);
        }
    }

    return 0;
}
