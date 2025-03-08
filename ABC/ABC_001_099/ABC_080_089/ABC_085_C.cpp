#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

void cal(int &x,int &y,int &z,ll N,ll Y){
    for(x=0;x<=N;x+=1){
        for(y=0;y<=N-x;y+=1){
            z= N-x-y;
            int value = 10000*x+5000*y+1000*z;
            if(value==Y){
                return;
            }
            if(value>Y){
                break;
            }
        }
    }
    x=-1;
    y=-1;
    z=-1;

}


int main(){
    ll N,Y;
    cin>>N>>Y;
    int x,y,z;
    cal(x,y,z,N,Y);
    cout <<x<<' '<<y<<' '<<z<< endl;
}    
