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
    string s;
    unordered_map<char,ll> d={
        {'M',0},
        {'A',0},
        {'R',0},
        {'C',0},
        {'H',0}
        };
    for(ll i=0;i<n;i++){
        cin>>s;
        char init=s[0];
        if(d.count(init)){
            d[init]++;
        }
        
    }

    ll ans=0;
    vector<ll> v;
    for(const auto&[key,value]:d){
        v.push_back(value);
    }
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            for(int k=j+1;k<5;k++){
                ans+=v[i]*v[j]*v[k];
            }
        }
    }
    cout << ans << endl;


    
}