#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

int main(){
    ll W,H,x,y;
    cin>>W>>H>>x>>y;
    double ans = 1.0*W*H/2;
    int ans_1;
    if(2*x==W && 2*y==H){
        ans_1=1;
    }
    else{
        ans_1=0;
    }
    cout << ans << ' ' << ans_1 <<endl;
}