#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

int main(){
    ll N;
    cin>>N;
    vector<ll> v(N,0);
    for(ll i=0;i<N;i++){
        cin>>v[i];
    }
    bool up = false;
    bool down = false;
    ll cnt=1;

    for(ll i=0;i<N-1;i++){
        if(v[i]<v[i+1]){
            up=true;
        }
        if(v[i]>v[i+1]){
            down = true;
        }
        if(up&&down){
            cnt++;
            up=false;
            down=false;
        }
    }
    cout << cnt << endl;

}