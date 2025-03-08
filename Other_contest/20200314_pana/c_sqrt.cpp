#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll x = 4*a*b;
    ll y = c-a-b;
    if(y<=0){
        cout << "No" << endl;
        return 0;
    }
    ll y1 = y*y;
    //cout << x << ',' << y2 << endl;
    if(x<y1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}