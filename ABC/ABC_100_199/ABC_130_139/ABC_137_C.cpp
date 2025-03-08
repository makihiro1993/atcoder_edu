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

ll comb(ll x){
    if(x<=1) return 0;
    return x*(x-1)/2;
}


int main(){
    ll n;
    cin>>n;
    string s;
    unordered_map<string,ll> d;
    for(ll i=0;i<n;i++){
        cin>>s;
        sort(s.begin(),s.end());
        if(d.count(s)){
            d[s]++;
        }
        else{
            d[s]=1;
        }

    }
    ll ans=0;
    for(const auto&[key,value] : d){
        //cout << key << ',' << value << endl;
        ans+=comb(value);
    }
    cout << ans << endl;
}