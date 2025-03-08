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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i =0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    while(true){
        ll sz=v.size();
        for(ll i=1;i<sz;i++){
            v[i]%=v[0];
        }
        sort(v.begin(),v.end());
        auto ite = lower_bound(v.begin(),v.end(),1);
        v=vector(ite,v.end());
        if(v.size()==1){
            break;
        }
    }
    cout << v[0] << endl;
}