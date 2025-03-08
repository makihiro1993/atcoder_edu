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
    ll n,k,a,b;
    cin>>n>>k;
    vector<pair<ll,ll>> items(n);
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        pair<ll,ll> p_temp = {a,b};
        items[i] = p_temp;
    }
    //vectorをソート
    sort(items.begin(),items.end());
    for(ll i=0;i<n;i++){
        ll value = items[i].first;
        ll size = items[i].second;
        if(k<=size){
            cout << value << endl;
            return 0;
        }
        k -=size;
    }


}