#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

int main(){
    int W,H,N,x,y,a;
    cin>>W>>H>>N;
    int x_min=0,x_max=W,y_min=0,y_max=H;
    for(int i=0;i<N;i++){
        cin>>x>>y>>a;
        if(a==1) x_min=max(x_min,x);
        if(a==2) x_max=min(x_max,x);
        if(a==3) y_min=max(y_min,y);
        if(a==4) y_max=min(y_max,y);
    }
    if(x_min>=x_max||y_min>=y_max){
        cout << 0 <<endl;
        return 0;
    }
    cout <<(x_max-x_min)*(y_max-y_min) << endl;
}