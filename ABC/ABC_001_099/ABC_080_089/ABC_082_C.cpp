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
    ll n,a;
    cin>>n;
    unordered_map<ll,ll> d;
    for(ll i=0;i<n;i++){
        cin>>a;
        if(d.count(a)){
            d[a]++;
        }
        else{
            d[a]=1;
        }
    }
    ll ans=0;
    for(const auto&[key,value]:d){
        if(key>value){
            ans+=value;
        }
        else if(key<value){
            ans+=(value-key);
        }
    }
    cout << ans << endl;
}