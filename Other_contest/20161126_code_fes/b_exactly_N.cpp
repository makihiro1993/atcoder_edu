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
    ll n;
    cin>>n;
    //当たりをつける
    ll v= static_cast<ll>(pow(n,0.5));
    while(true){
        if(v*(v+1)/2 >=n){
            break;
        }
        v++;
    }
    //そのまま和の公式だったら
    if(v*(v+1)/2 == n){
        for(ll i=1;i<=v;i++){
            cout << i << endl;
        }
        return 0;
    }
    //超えている場合
    ll diff=v*(v+1)/2 - n;
    set<ll> value_non_use;
    for(ll i=v;i>=1;i--){
        if(diff-i>=0){
            diff-=i;
            value_non_use.insert(i);
        }
        if(diff==0){
            break;
        }
    }
    for(ll i=1;i<=v;i++){
        if(value_non_use.count(i)) continue;
        cout << i << endl;
    }
    

}