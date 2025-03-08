#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;


int main(){
    ll x;
    cin>>x;
    if(x==1){
        cout << 1 << endl;
        return 0;
    }

    ll cnt =1;
    while(true){
        x -= cnt;
        cnt++;
        if(x<=cnt){
            break;
        }
    }
    cout << cnt << endl;
}